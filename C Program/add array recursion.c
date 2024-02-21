#include<stdio.h>
int addArray_iterative(int *arr, int size){
	int i;
	int sum = 0;
	for(i =0 ; i < size; i++){
		sum += arr[i];
	}
	return sum;
}
int addArray_recursive(int *arr,int i,int size){
    if(i == size) return 0;
    return arr[i] + addArray_recursive(arr, i + 1, size);
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
    int arraySum_iterative = addArray_iterative(arr,n);
    int arraySum_recursive = addArray_recursive(arr,0,n); 
    printf("%d %d",arraySum_iterative,arraySum_recursive);
    return 0;
}
