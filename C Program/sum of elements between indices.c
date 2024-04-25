#include<stdio.h>
int main()
{
	//int arr[7] = {12,7,2,10,16,24};
	int i,n,l,r;
	int arr[n];
	scanf("%d",&n);
	int sum1 = 0;
	for(i = 0; i < n; i++){
		scanf("%d",&arr[i]);
	}
	if(l < r < n){
		for(i = l; i < r; i++){
		sum1 = sum1 + arr[i];
	    }
	    printf("%d",sum1);
	}
	/*for(i = 1; i < 5; i++){
		sum1 = sum1 + arr[i];
	}
	for(i = 0; i < 6; i++){
		sum2 = sum2 + arr[i];
	}
	for(i = 3; i < 7; i++){
		sum3 = sum3 + arr[i];
	}
	printf("%d\n%d\n%d",sum1,sum2,sum3);*/
	return 0;
}
