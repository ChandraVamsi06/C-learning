#include<stdio.h>
int fact(int n){
	if(n==1)return 1;
	return n*fact(n-1);
}
int main()
{
	int n=fact(5);
	printf("%d",n);
}
