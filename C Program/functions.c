#include<stdio.h>
/*int add(int a,int b){
	return a + b;
}
int main()
{
	int a = 10,b = 20;
	printf("%d",add(a,b));
	return 0;
}*/
void add(int a,int b){
	int res = a+b;
	printf("%d",res);
}
int main()
{
	int a = 10,b = 20;
    add(a,b);
	return 0;
}
