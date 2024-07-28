#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int temp = n,even = 0, odd = 0;
	while(temp > 0){
		if(temp%2 == 0){
			even ++;
		}
		else{
			odd++;
		}
		temp = temp/10;
	}
	printf("Even: %d\nOdd: %d",even,odd);
	return 0;
}
