#include<stdio.h>
void ReadInput(int **ptr,int row,int col){
	int i,j;
	//int row = sizeof(ptr) / sizeof(ptr[0]);
	printf("%d %d",row,col);
	for(i = 0; i < row; i++){
		//int col = sizeof(ptr[i]) / sizeof(ptr[0][0]);
		//printf("%d",cols);
		for(j = 0; j < col; j++){
			scanf("%d",&ptr[i][j]);
		}
	}
}
int main()
{
	int i,j,row,col;
	scanf("%d %d",row,col);
	int**ptr;
	ptr = (int **)malloc(row * sizeof(int *));
	for(i = 0; i < row ; i++){
		ptr[i] = (int *)malloc(col * sizeof(int *));
	}
	ReadInput(ptr,row,col);
	for(i= 0; i < row; i++){
		for(j = 0; j < col; j++){
			printf("%d",ptr[i][j]);
		}
	}
	return 0;
}
