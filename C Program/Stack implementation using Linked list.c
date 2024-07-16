//Stack implementation using Linked List
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
typedef struct node Node;
Node *head = NULL;
int size;
int top = -1;
void PUSH(int val){
	if(top == size - 1){
		printf("Stack is Full\n");
	}
	Node *newNode = (Node *)malloc(sizeof(Node));
	newNode->data = val;
	newNode->next = NULL;
	if(head == NULL){
		head = newNode;
	}
	else{
		newNode->next = head;
		head = newNode;
	}
	top++;
}
void POP(){
	if(head == NULL){
		printf("Stack is empty\n");
		return;
	}
	else{
		Node *temp = head;//node to be deleted
		printf("%d is popped out of stack\n",head->data);
		head = head->next;//delete the node
		free(temp);//deallocate the memory for node1
	}
	top--;
}
void display(){
	if(head == NULL){
		printf("Stack is empty\n");
		return;
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
	printf("Enter Size  of Stack: ");
	scanf("%d",&size);
	int ch;
//	infinite loop
	while(1){
		printf("Enter\n1. PUSH\n2. POP\n3. Display\nAny other to exit\n");
		scanf("%d",&ch);
		if(ch == 1){
			//implement insert at head
			int val;
			printf("Enter a value for the node to PUSH: ");
			scanf("%d", &val);
			PUSH(val); //function call
		}
		else if(ch == 2){
			//implement delete at head
			POP();
		}
		else if(ch == 3){
			//implement Display
			display();
		}
		else{
			printf("Thank You for the testing. AIDEU!!\n");
			break;
		}
	}
	return 0;
}

