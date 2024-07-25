//Polynomial representation using linked list..
#include<stdio.h>
#include<stdlib.h>
struct node{
	float coeff;
	int expo;
	struct node *next;
};
typedef struct node Node;
Node* insert_term(Node *head, float c, int e){
//	Create a new node
	Node *newNode = (Node *)malloc(sizeof(Node));
	newNode->coeff = c;
	newNode->expo = e;
	newNode->next =  NULL;
	if(head == NULL){
		head = newNode;
	}
	else{
		Node *temp = head;
		while(temp->next != NULL){
			temp = temp->next;
		}
		temp->next = newNode;
	}
	return head;
}
void display_polynomial(Node *head){
	Node *temp = head;
	while(temp != NULL){
		printf("(%0.2f)x^%d%c", temp->coeff, temp->expo, (temp->next == NULL)? '\n' : '+');
		temp = temp->next;
	}
}
Node* create_polynomial(){
	Node *head = NULL;
	int n,i;//number of terms in the polynomial
	printf("Enter number of terms in the polynomial: ");
	scanf("%d",&n);
	for(i = 1; i <= n; i++){
		float coef;
		int ex;
		printf("Enter coefficient of term %d: ",i);
		scanf("%f",&coef);
		printf("Enter exponent of term %d: ",i);
		scanf("%d",&ex);
		head = insert_term(head,coef,ex);
	}
	return head;
}
int main()
{
	Node *poly = create_polynomial();
	display_polynomial(poly);
	return 0;
}
