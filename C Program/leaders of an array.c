#include<stdio.h>
int main()
{
	int n,i,k;
	scanf("%d",&n);
	int A[n];
	for(i = 0;i < n;i++){
		scanf("%d",&A[i]);
	}
	int right_max = 0;
	int B[i];
	int j = 0;
	for(i = n - 2; i >= 0; i--){
		if(A[i] > right_max){
			right_max = A[i];
			B[j++] > A[i];
		}
	}
	for(k = j - 1; k >= 0; k--){
		printf("%d ",B[k]);
	}
	return 0;
}
