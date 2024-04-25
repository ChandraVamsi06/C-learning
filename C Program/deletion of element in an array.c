#include<stdio.h>
void delete_element(int *arr,int n,int deleted,int index){
	int i,k;
	for(i = index; i < n; i++){
		arr[i] = arr[i + 1];
	}
	for(k = 0; k < n - 1; k++){
		printf("%d ",arr[k]);
	}
}
int main()
{
	int n,i;
	printf("Enter size of array : ");
	scanf("%d",&n);
	int arr[n];
	printf("\nEnter array elements : ");
	for(i = 0; i < n - 1; i++){
		scanf("%d",&arr[i]);
	}
	int deleted,index;
	printf("Enter element to be deleted & index : ");
	scanf("%d %d",&deleted,&index);
	printf("\n");
	delete_element(arr,n,deleted,index);
	return 0;
}
