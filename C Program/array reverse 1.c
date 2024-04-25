#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	int i;
	for(i = 0; i < n; i++){
		scanf("%d",&arr[i]);
	}
	for(i = 0; i < n/2; i++){
		int t = arr[n-1-i];
		arr[n-1-i] = arr[i];
		arr[i] = t;
	}
	for(i = 0; i < n; i++){
		printf("%d",arr[i]);
	}
}
