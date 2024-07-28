#include<stdio.h>
int main()
{
	int n = 7;
	int i,j,k = 2;
	int A[7] = {2,10,9,3,5,6,1};
	int count = 0;
	for(i = 0; i < 7; i++){
		for(j = i; j < 7; j++){
			int sum = 0;
			for(k = i; k < j; k++){
				sum += A[k];
			}
			if(sum % 2 == 0){
				count++;
			}
		}
	}
	printf("%d",count);
	return 0;
}
