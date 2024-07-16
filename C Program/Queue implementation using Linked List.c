//Queue implementation using Linked List
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
typedef struct node Node;
Node *front = NULL;
Node *rear = NULL;
int size = 0;
void Enqueue(int val){
	Node *newNode = (Node *)malloc(sizeof(Node));
	newNode->data = val;
	newNode->next = NULL;
	if(front == NULL && rear == NULL){
		front = newNode;
		rear = newNode;
	}
	else{
    	rear->next = newNode;
    	rear = newNode;
	}
	size++;
}
void Dequeue(){
	if(front == NULL && rear == NULL){
		printf("Queue is empty\n");
	}
	else if(front == rear){
		printf("%d is removed\n",front->data);
		Node *temp = front;
		front = NULL;
		rear = NULL;
		free(temp);
	}
	else{
		printf("%d is removed\n",front->data);
		Node *temp = front;
		front = front->next;
		free(temp);
	}
	size--;
}
void Display(){ 
	if(front == NULL && rear == NULL){
		printf("Queue is empty\n");
	}
	else{
		Node *temp = front;
		while(temp != NULL){
			printf("%d ",temp->data);
			temp = temp->next;
		}
		printf("\n");
	}
}
void get_front(){
	if(front == NULL && rear == NULL){
		printf("Queue is empty\n");
	}
	else{
		printf("Front: %d\n",front->data);	
	}
}
void get_rear(){
	if(front == NULL && rear == NULL){
		printf("Queue is empty\n");
	}
	else{
		printf("Rear: %d\n",rear->data);
	}
}
void get_size(){
	printf("%d\n",size);
}
int main(){
	int ch;
	while(1){
		printf("Enter\n1. Enqueue\n2. Dequeue\n3. Display\n4. Get front\n5. Get rear\n6. Get Size\nAny Other to exit\n");
		scanf("%d",&ch);
		if(ch == 1){
			int val;
			printf("Enter the value to be queued: ");
			scanf("%d",&val);
			Enqueue(val);
		}
		else if(ch == 2){
			Dequeue();
		}
		else if(ch == 3){
			Display();
		}
		else if(ch == 4){
			get_front();
		}
		else if(ch == 5){
			get_rear();
		}
		else if(ch == 6){
			get_size();
		}
		else{
			break;
		}
	}
	return 0;
}
