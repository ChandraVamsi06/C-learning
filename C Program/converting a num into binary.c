//converting a num to binary
#include<stdio.h>
int main(){
	int n,rem;
	scanf("%d",&n);
	int b = 0;
	int place = 1;
	while(n){
		rem = n % 2;
		n /= 2;
		b += rem * place;
		place *= 10;
	}
	printf("%d",b);
	return 0;
}
