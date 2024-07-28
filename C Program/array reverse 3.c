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
	for(i = 0,j = n-1; i < j,i < j; i++,j--){
		int t = arr[i];
		arr[i] = arr[j];
		arr[j] = t;
	}
	for(j = 0; j < n; j++){
		printf("%d ",arr[j]);
	}
}
