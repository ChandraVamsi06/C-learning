#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int arr[n];
    int count=0;
    int sum=0;
    int average;
    for(i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    for(i = 0; i < n; i++){
        for(j = 0; j<n; j++){
            sum=sum+arr[i];
        }
        average=sum/n;
    }
    for(i=0;i<n;i++){
		if(arr[i]<average){
			count++;
		}
    }
    printf("%d",count);
    return 0;
}
