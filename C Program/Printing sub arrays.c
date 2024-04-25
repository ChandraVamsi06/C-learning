#include<stdio.h>
int main()
{
	int n = 7;
	int i,j,k;
	int A[7] = {2,10,9,3,5,6,1};
	//start point if sub array
	for(i = 0; i < 7; i++){
		//end point if sub array
		for(j = i; j < 7; j++){
			//to print sub array
			for(k = i; k < j; k++){
				printf("%d ",A[k]);
			}
			printf("\n");
		}
	}
	return 0;
}
