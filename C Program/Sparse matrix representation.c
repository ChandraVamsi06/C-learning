//Sparse matrix representation
#include<stdio.h>
#include<stdlib.h>
struct node{
	int row,column,data;
	struct node *next;
};
typedef struct node Node;
Node *head = NULL;// global variable head
void insert_at_tail(int r, int c, int val){
//	Create a new node
	Node *newNode = (Node *)malloc(sizeof(Node));
	newNode->row = r;
	newNode->column = c;
	newNode->data = val;
	newNode->next = NULL;
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
}
void display(){
	printf("Non-Zero elements of the given sparse matrix are: \n");
	printf("Row\tColumn\tVal\n");
	Node *temp = head;
	while(temp != NULL){
		printf("%d\t%d\t%d\n", temp->row, temp->column, temp->data);
		temp = temp->next;
	}
}
int main()
{
	int row,column,i,j;
	scanf("%d %d",&row,&column);
	int mat[row][column];
	for(i = 0; i < row; i++){
		for(j = 0; j < column; j++){
			scanf("%d",&mat[i][j]);
		}
	}
//	Running a loop on it
	for(i = 0; i <row; i++){
		for(j = 0; j < column; j++){
			if(mat[i][j] != 0){
				insert_at_tail(i,j,mat[i][j]);
			}
		}
	}
	display();
}
