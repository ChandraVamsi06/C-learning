#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};

void display(struct node *head){
	///temp to traverse , structure pointer
	struct node *temp = head;
	while(temp != NULL){
		printf("%d\n",temp->data);
		temp = temp->next;
	}
}

int main(){
	struct node *n1 =(struct node *) malloc(sizeof(struct node));
	struct node *n2 =(struct node *) malloc(sizeof(struct node));
	struct node *n3 =(struct node *) malloc(sizeof(struct node));
	struct node *n4 =(struct node *) malloc(sizeof(struct node));
	struct node *n5 =(struct node *) malloc(sizeof(struct node));

	n1->data = 10;
	n1->next = n2;

	n2->data = 20;
	n2->next = n3;

	n3->data = 30;
	n3->next = n4;

	n4->data = 40;
	n4->next = n5;

	n5->data = 50;
	n5->next = NULL;

	/*Normal brute way
	printf("%d\n",n1->data);
	printf("%d\n",n1->next->data);
	printf("%d\n",n1->next->next->data);
	printf("%d\n",n1->next->next->next->data);
	printf("%d\n",n1->next->next->next->next->data);
	*/

	struct node *head  = n1;
	display(head);

}
