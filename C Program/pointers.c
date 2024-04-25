#include<stdio.h>
void AddOne(int *ptr){
	(*ptr)++;
	printf("%d\n",*ptr);
}
int main(){
	int n=10;
	int *ptr = &n;
	AddOne(ptr);
	printf("%d", n);
	return 0;
}
