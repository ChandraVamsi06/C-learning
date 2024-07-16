//Queue implementation using Arrays
#include<stdio.h>
int q[100];
int front = 0;
int rear = 0;
int size;
void Enqueue(int val){
	if(rear - front == size){
		printf("Queue is full\n");
		return;
	}
	q[rear] =val;
	rear++;
}
void Dequeue(){
	if(front == rear){
		printf("Queue is empty\n");
		return;  
	}
	printf("%d is removed\n",q[front]);
	front++;
}
void Display(){
	if(front == rear){
		printf("Queue is empty\n");
		return;
	}
	int i;
	for(i = front; i < rear;  i++){
		printf("%d ",q[i]);
	}
	printf("\n");
}
int main()
{
	printf("Enter size of queue: ");
	scanf("%d",&size);
	int ch;
	while(1){
		printf("Enter\n1. Enqueue\n2. Dequeue\n3. Display\nAny Other to exit\n");
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
		else{
			break;
		}
	}
	return 0;
}
