//Number is in either wave form or not
#include<stdio.h>
//#include<stdbool.h>
int main()
{
	int n;
	scanf("%d",&n);
	//2 4 1 5 3 6
	int up = 0; // ps --> PRESENT , pe --> previous
	int down = 0;
	int pe = n % 10;//6
	n /= 10;		
	int ps = n % 10;//3
	if(ps > pe){
		down = 1;
		up = 0;
	}
	if(ps < pe){
		up = 1;
		down = 0; 
	}
	n /= 10;
	int flag = 1;
	while(n){
		pe = ps;//3
		pe = n % 10;//5
		n /= 10;
		if(down == 1 && ps > pe){ // 5 > 3
			up = 1; //1
			down =0;
		}
		else if(up == 1 && ps < pe){
			down =1;
			up = 0;
		}
		else{
			flag = 0;
			break;
		}
	}
	if(flag == 1){
		printf("It is a wave");
	}
	else{
		printf("It is not a wave");
	}
	return 0;
}
