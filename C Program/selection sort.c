//	Selection sort
#include<stdio.h>
void array_print_cheyyi(int *arr, int size){
	int i;
	for(i = 0; i < size; i++){
		printf("%d  ",arr[i]);
	}
	printf("\n");
}
void selection_sort_cheyyi(int *arr, int n){
	int i,j,k;
	for(i = 0; i < n - 1; i++){
		int min = i;
		for(j = i + 1; j < n; j++){
			if(arr[j] < arr[min]){
				min = j;
			}
		}
		int temp = arr[i];
		arr[i] = arr[min];
		arr[min] = temp;
		for(k = 0; k < n; k++){
			printf("%d  ",arr[k]);
		}
		printf("\n");
	}
}
int main()
{
	int n,i,j;
	scanf("%d",&n);
	int arr[n];
	for(i = 0; i < n; i++){
		scanf("%d",&arr[i]);
	}
	array_print_cheyyi(arr, n);
	selection_sort_cheyyi(arr,n);
	return 0;
}
