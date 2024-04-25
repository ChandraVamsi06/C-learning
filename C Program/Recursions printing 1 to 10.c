#include<stdio.h>
void Display(int i){
	if(i < 1) return;
	Display(i - 1);
	printf("%d\n",i);
}
int main()
{
	Display(10);
	return 0;
}
