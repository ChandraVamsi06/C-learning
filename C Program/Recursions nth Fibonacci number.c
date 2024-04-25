#include<stdio.h>
int Fibonacci(int i){
	if(i <= 1) return i;
	return Fibonacci(i - 1)+ Fibonacci(i - 2);
}
int main()
{
	int n;
	scanf("%d",&n);
	int ans = Fibonacci(n);
	printf("%d",ans);
	return 0;
}
