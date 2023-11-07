#include<stdio.h>

int main(){
	int n;
	scanf("%i",&n);
	int mod , sum = 0 , pro = 1; 
	for(;n > 0 ;){
		mod = n % 10;
		n = n / 10;
		if(mod % 2 == 0){
			sum = sum + mod;
		}
		else{
			pro = pro * mod;
		}
	}
	printf("%i\n",sum);
	printf("%i",pro);
	return 0;
}
