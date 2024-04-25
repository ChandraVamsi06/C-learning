#include<stdio.h>
int linear_search_iterative(int *arr,int size,int key){
	int i;
	for(i = 0; i < size; i++){
		if(arr[i] == key) return i;
	}
	return -1;
}
int linear_search_recursive(int *arr,int i,int size,int key){
	if(i == size) return -1;
	if(arr[i] == key) return i;
	return linear_search_recursive(arr,i + 1, size, key);
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
	int key;
	scanf("%d",&key);
	int value1 = linear_search_iterative(arr,n,key);
	int value2 = linear_search_recursive(arr,0,n,key);
	if(value1 == -1 || value2 == -1) printf("Key not found");
	else{
		printf("Element found at index %d\n",value1);
		printf("Element found at index %d",value2);
	}
}
