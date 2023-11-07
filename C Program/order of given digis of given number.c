#include<stdio.h>
int main(){
	int num , pre , prs;// pre --> previous , prs --> present    num == 234567
	scanf("%i",&num);
	int increase = 0 , decrease = 0 , count = 0;
	for(;num > 0 ;){
		pre = num % 10;//7
		num/=10; //23456
		count++;
		prs = num % 10; //6
		if(pre > prs){
			increase++;
		}
		else if(pre < prs){
			decrease++;
		}
		else{
		printf("Mixed number.");
	    }
		num /= 10;	
	}
	if(increase == count){
		printf("Ascending order");
	}
	else if(decrease==count)
	{
		printf("Descending order");
	}
		else
	{
		printf("Mixed number");
	}
	return 0;
}
