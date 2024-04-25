#include<stdio.h>
void insert_element(int *arr,int n,int insert,int index){
	int i,k;
	for(i = n - 1; i > index; i--){
		arr[i] = arr[i - 1];
	}
	arr[index] = insert;
	for(k = 0; k < n; k++){
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
	int insert,index;
	printf("Enter element to be inserted & index : ");
	scanf("%d %d",&insert,&index);
	printf("\n");
	insert_element(arr,n,insert,index);
	return 0;
}
