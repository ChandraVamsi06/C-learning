//RPN Evaluation
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int caluclate(int x, int y, char symbol){
	if(symbol == '+') return x + y;
	else if(symbol == '-') return x - y;
	else if(symbol == '*') return x * y;
	else if(symbol == '/') return x / y;
}
void evaluate_postfix(char *postfix){
	char st[101];
	int top = -1,i;
	for(i = 1; i < strlen(postfix); i++){
		if(isdigit(postfix[i])){
			st[++top] = postfix[i] - '0';
		}
		else{
			int op2 = st[top--];
			int op1 = st[top--];
			int res = caluclate(op1,op2,postfix[i]);
			st[++top] = res;
			printf("%d", st[top]);
		}
	}
//	printf("%d", st[top]);
}
int main(){
	char postfix[101]; //String is in infix form
	scanf("%s", postfix);
	evaluate_postfix(postfix);
	return 0;
}
