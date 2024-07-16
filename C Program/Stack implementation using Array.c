//Stack implementation using Array
#include<stdio.h>
int st[10000];
int size;
int top = -1;
void push(int ele){
	//Overflow
	if(top == size - 1){
		printf("Stack Overflow / Stack is full");
	}
	else{
		st[++top] = ele; //top++;\nst[top] = ele;
	}
}
void pop(){
	//Underflow
	if(top == -1){
		printf("Stack Underflow / Stack is empty\n");
	}
	else{
		printf("Deleted element is : %d\n",st[top]);
		top--;
	}
}
void peek(){
	//Underflow
	if(top == -1){
		printf("Stack Underflow / Stack is empty\n");
	}
	else{
		printf("%d\n",st[top]);
	}
}
void display(){
	//Underflow condition
	if(top == -1) printf("Stack is empty\n");
	else{
		int i;
		for(i = top; i >= 0; i--){
			printf("%d ",st[i]);
		}
		printf("\n");
	}
}
int main()
{
	printf("Enter size of stack: ");
	scanf("%d",&size);
	int ch;
	while(1){
		printf("Enter\n1. PUSH\n2. POP\n3. PEEK\n4. Display\nAny other to exit\n");
		scanf("%d",&ch);
		if(ch == 1){
//			push operation
			int ele;
			printf("Enter element to be push: ");
			scanf("%d",&ele);
			push(ele);
		}
		else if(ch == 2){
//			pop
			pop();
		}
		else if(ch == 3){
//			peek
			peek();
		}
		else if(ch == 4){
//			display
			display();
		}
		else{
			break;
		}
	}
}
