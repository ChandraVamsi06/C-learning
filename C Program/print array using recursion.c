#include<stdio.h>
void printArray_iterative(int *arr, int size){
	int i;
	for(i =0 ; i < size; i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}
void printArray_recursive(int *arr,int i,int size){
    if(i == size) return;
    printf("%d ",arr[i]);
    printArray_recursive(arr,i + 1,size);
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int i;
    for(i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    printArray_iterative(arr,n);
    printArray_recursive(arr,0,n);
    return 0;
}
