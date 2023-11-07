#include<stdio.h>
int main()
{
	int n,r;
	scanf("%d",&n);
	int rev_num = 0;
	while(n > 0){
		r = n % 10;
		rev_num = (rev_num * 10) + r;
		n = n / 10;
	} 
	printf("%d",rev_num);
	return 0;
}
