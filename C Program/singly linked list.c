//Implementation of a singly linked list
#include<stdio.h>
#include<stdlib.h>
//self-referential structure
struct node{
	int data;
	struct node *next;
};
typedef struct node Node;
//Head as global variable
Node *head = NULL;
void insert_at_head(int val){
	//Creating a newnode
	Node *newNode = (Node *)malloc(sizeof(Node));
	newNode->data = val;
	newNode->next = NULL;
	if(head == NULL){ //if there are new nodes already
		head = newNode;
	}
	else{
		newNode->next = head;
		head = newNode;
	}
}
void insert_at_tail(int val){
	//Creating a newnode
	Node *newNode = (Node *)malloc(sizeof(Node));
	newNode->data = val;
	newNode->next = NULL;
	if(head == NULL){ //if there are new nodes already
		head = newNode;
		return;
	}
	Node *temp = head;
	while(temp->next != NULL){
		temp = temp->next;
	}
	temp->next = newNode;//connecting last and newNodes
}
void delete_at_head(){
	if(head == NULL){
		printf("Linked list is empty. Deletion is not possible\n");
	}
	else{
		Node *temp = head;//node to be deleted
		head = head->next;//delete the node
		free(temp);//deallocate the memory for node1
	}
}
void delete_at_tail(){
	if(head == NULL){
		printf("Linked list is empty. Deletion is not possible\n");
		return;
	}
	else if(head -> next == NULL){//linked list with single node case
		Node *delNode =  head;
		head = NULL;
		free(delNode);
	}
	else{
//		Reach last but one node
		Node *temp = head;//node to be deleted
		while(temp->next->next != NULL){
			temp = temp->next;
		}
		Node *delNode = temp->next;
        temp->next=NULL;
        free(delNode);
	}
}
void display(){
	if(head == NULL){
		printf("No nodes to display\n");
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
int main()
{
	int ch;
	//infinite loop
	while(1){
		printf("Enter\n1. Insert at head\n2. Insert at tail\n3. Display\n4. Delete at head\n5. Delete at tail\nAny other to exit\n");
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
			//implement Display
			display();
		}
		else if(ch == 4){
			//implement delete at head
			delete_at_head();
		}
		else if(ch == 5){
			//implement delete at tail
			delete_at_tail();
		}
		else{
			printf("Thank You for the testing. AIDEU!!\n");
			break;
		}
	}
	return 0;
}
