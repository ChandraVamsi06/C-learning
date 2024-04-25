#include<stdio.h>
int *Findleaders(int A[],int n,int* rs){
	int i,j = 1;
	static int B[100000];
	B[0] = A[n - 1];
	for(i = n - 2; i >= 0; i--){
		if(A[i] > B[j - 1]){
			B[j++] = A[i];
		}
	}
	*rs = j;
	return B;
}
int main()
{
	int n,i,j;
	scanf("%d",&n);
	int A[n];
	for(i = 0; i < n; i++){
		scanf("%d",&A[i]);
	}
	j = 0;
	int* returnSize = &j;
	int* ptr = Findleaders(A,n,returnSize);
	for(i = j - 1; i >= 0; i--){
		printf("%d ",ptr[i]);
	}
	return 0;
}
