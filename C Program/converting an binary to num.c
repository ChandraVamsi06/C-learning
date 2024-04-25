//converting a binary to num
#include<stdio.h>
int main(){
	int n, i;
	scanf("%d",&n);
	int sum = 0, k = 1;
	while(n != 0){
		i = n % 10;
		sum += i*k;
		k *= 2;
		n /= 10;
	}
	printf("%d",sum);
	return 0;
}
