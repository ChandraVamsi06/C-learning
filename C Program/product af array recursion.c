#include<stdio.h>
int multiplyArray_iterative(int *arr, int size){
	int i;
	int product = 1;
	for(i =0 ; i < size; i++){
		product *= arr[i];
	}
	return product;
}
int multiplyArray_recursive(int *arr,int i,int size){
    if(i == size) return 1;
    return arr[i] * multiplyArray_recursive(arr, i + 1, size);
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
    int arrayproduct_iterative = multiplyArray_iterative(arr,n);
    int arrayproduct_recursive = multiplyArray_recursive(arr,0,n); 
    printf("%d %d",arrayproduct_iterative,arrayproduct_recursive);
    return 0;
}
