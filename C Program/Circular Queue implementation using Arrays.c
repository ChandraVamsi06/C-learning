//Circular Queue implementation using Arrays
#include<stdio.h>
#include<stdlib.h>
int *q;
int front;
int rear;
int size;
int capacity;
void Enqueue(int val){
	if(size == capacity){
		printf("Queue is full\n");
		return;
	}
	rear = (rear + 1) % capacity;
	q[rear] =val;
	size++;
}
void Dequeue(){
	if(size == 0){
		printf("Queue is empty\n");
		return;  
	}
	printf("%d is removed\n", q[front]);
	front = (front + 1) % capacity;
	size--;
}
void Display(){
	int temp = front;
	while(1){
		if(temp == rear){
			printf("%d ",q[temp]);
			break;
		}
		printf("%d ",q[temp]);
		temp = (temp + 1) % capacity;
	}
}
int main()
{
	printf("Enter capacity of queue: ");
	scanf("%d",&capacity);
	q = (int *)malloc(capacity * sizeof(capacity)); //Dynamic array
	size = 0;
	front = 0;
	rear = capacity - 1;
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
