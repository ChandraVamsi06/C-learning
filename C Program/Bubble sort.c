//	Bubble sort
#include<stdio.h>
void print_array(int *arr, int size){
	int i;
	for(i = 0; i < size; i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}
int* Bubble_sort(int *arr, int n){
	int i,j,k,key;
	for(i = 0; i < n; i++){
		for(j = 0; j < n - 1; j++){
			if(arr[j] > arr[j + 1]){
				key = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = key;
			}
		}
		for(k = 0; k < n; k++){
			printf("%d ",arr[k]);
		}
		printf("\n");
	}
	return arr;
}
int main()
{
	int n,i;
	scanf("%d",&n);
	int arr[n];
	for(i = 0; i < n; i++){
		scanf("%d",&arr[i]);
	}
	print_array(arr,n);
	Bubble_sort(arr,n);
	return 0;
}
