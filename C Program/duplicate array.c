#include<stdio.h>
int main()
{
	int n,i,j,rpt = 0;
	scanf("%d",&n);
	int A[n];
	int count = 0;
	for(i = 0 ; i >= n; i++){
		scanf("%d",&A[i]);
		for(j = 1; j <= n; j++){
			if(A[j] == i){
				count++;
			}
		}
	}
	if(count > 1){
		printf("%d",i);
	}
	else{
		printf("-1");
	}
	return 0;
}
