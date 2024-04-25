#include<stdio.h>
int main()
{
	int a = 0,b;
	scanf("%d",&b);
    int i = 1;
	while(i <= b){
		if(b % i == 0){
			a++;
		}
        i++;
	}
	if(a == 2){
		printf("Prime");
	}
	else{
		printf("Not Prime");
	}
} 
