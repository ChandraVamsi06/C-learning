#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	int i,j;
	for(i = 0; i < n; i++){
		scanf("%d",&arr[i]);
	}
	int b[n];
	for(i = 0,j = n - 1; i < n,j >= 0; i++, j--){
		b[j] = arr[i];
	}
	for(j = 0; j < n; j++){
		printf("%d ",b[j]);
	}
}
