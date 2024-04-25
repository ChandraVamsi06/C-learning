//Implementation of a Doubly linked list
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *prev;
	struct node *next;
};
typedef struct node Node;
Node *head = NULL;
Node *tail = NULL;
void insert_at_head(int val){
//	create an node
	Node *newnode = (Node *)malloc(sizeof(Node));
	newnode->prev = NULL;
	newnode->next = NULL;
	newnode->data = val;
	if(head == NULL && tail == NULL){
		head = newnode;
		tail = newnode;
	}
	else{
		newnode->next = head;
		head->prev = newnode;
		head = newnode;
	}
}
void insert_at_tail(int val){
	Node *newnode = (Node *)malloc(sizeof(Node));
	newnode->prev = NULL;
	newnode->next = NULL;
	newnode->data = val;
	if(head == NULL && tail == NULL){
		head = newnode;
		tail = newnode;
	}
	else{
		newnode->prev = tail;
		tail->next = newnode;
		tail = newnode;
	}
}
void delete_at_head(){
	//linked list is empty
	if(head == NULL && tail == NULL){
		printf("No nodes to Delete.\n");
	}
	else if(head == tail){
		Node *todelete = head;
		head = NULL;
		tail = NULL;
		free(todelete);
	}
	else{
		Node *todelete = head;
		head = head->next;
		head->prev = NULL;
		free(todelete);
	}
}
void delete_at_tail(){
	//linked list is empty
	if(head == NULL && tail == NULL){
		printf("No nodes to Delete.\n");
	}
	else if(head == tail){
		Node *todelete = head;
		head = NULL;
		tail = NULL;
		free(todelete);
	}
	else{
		Node *todelete = tail;
		tail->prev->next = NULL;
		tail->prev = tail;
//		tail = tail->prev;
//		tail->next = NULL;
		free(todelete);
	}
}
void display_forward(){ //dispaly from left
	if(head == NULL && tail == NULL){
		printf("No nodes to display.\n");
	}
	else{
		Node *temp = head;
		while(temp != NULL){
			printf("%d ",temp->data);
			temp = temp->next;
		}
		printf("\n");
	}
}
void display_backward(){ //dispaly from right
	if(head == NULL && tail == NULL){
		printf("No nodes to display.\n");
	}
	else{
		Node *temp = tail;
		while(temp != NULL){
			printf("%d ",temp->data);
			temp = temp->prev;
		}
		printf("\n");
	}
}
int main()
{
	int ch;
	while(1){
		printf("Enter\n1. Insert at head\n2. Insert at tail\n3. Delete at head\n4. Delete at tail\n5.Display forward\n6.Display Backwards\nAny other to exit\n");
		scanf("%d",&ch);
		if(ch == 1){
			//implement insert at head
			int val;
			printf("Enter a value for the node to be inserted: ");
			scanf("%d", &val);
			insert_at_head(val); //function call
		}
		else if(ch == 2){
			//implement insert at tail
			int val;
			printf("Enter a value for the node to be inserted: ");
			scanf("%d", &val);
			insert_at_tail(val); //function call
		}
		else if(ch == 3){
			//implement delete at head
			delete_at_head();
		}
		else if(ch == 4){
			//implement delete at tail
			delete_at_tail();
		}
		else if(ch == 5){
			display_forward(); //dispaly from left
		}
		else if(ch == 6){
			display_backward(); //dispaly from right
		}
		else{
			printf("Thank You for the testing. AIDEU!!\n");
			break;
		}
	}
	return 0;
}
