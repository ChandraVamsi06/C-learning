#include<stdio.h>
int count(int i){
	if(i == 0)return i;
	return 1 + count(i / 10);
}
int main()
{
	int i,n;
	scanf("%d",&n);
	int ans = count(n);
	printf("%d",ans);
	return 0;
}
