#include<stdio.h>
int main()
{
	int n,i,k,j;
	scanf("%d",&n);
	//step 1 --> outer loop --> rows
	int star = 1;
	for(i = 1; i <= n; i++){
		//space1 star space1
		for(k = n - i; k < 0; k--){
			printf(" ");
		}
		//star
		for(j = 1; j <= star; j++){
			printf("*");
		}
		star += 2;
		//space
		for(k = n - i; k < 0; k--){
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}
