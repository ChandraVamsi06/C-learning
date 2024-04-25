#include<stdio.h>
int Factorial(int n){
	if(n == 1) return 1;
	return n * Factorial(n - 1);
}
int main()
{
	int ans = Factorial(5);
	printf("%d",ans);
	return 0;
}
