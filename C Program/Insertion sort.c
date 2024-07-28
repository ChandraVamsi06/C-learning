//	Insertion sort
#include<stdio.h>
void print_array(int *arr, int size){
	int i;
	for(i = 0; i < size; i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}
void insertion_sort(int *arr, int size){
	int i,j,k,key;
	for(i = 1; i < size; i++){
		j = i - 1, key = arr[i];
		while(j >= 0 && arr[j] > key){
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
		for(k = 0; k < size; k++){
			printf("%d ",arr[k]);
		}
		printf("\n");
	}
//	for(i = 0; i < size; i++){
//		printf("%d ",arr[i]);
//	}
	printf("\n");
}
int main()
{
	int n,i;
	scanf("%d",&n);
	int arr[n];
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	printf("Before insertion: ");
	print_array(arr,n);
	printf("After insertion: ");
	insertion_sort(arr, n);
	return 0;
}
