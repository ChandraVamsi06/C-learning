#include<stdio.h>
struct Employee{
	char name[20];
	char organisation[20];
	int year_of_join;
	int salary;
};
typedef struct Employee EMP;
int main()
{
	EMP arr[6];
	int i;
	for(int i = 0; i < 6; i++){
		printf("Enter name of Employee %d :",i + 1);
		scanf("%s",arr[i].name);
		printf("Enter organisation of Employee %d : ",i + 1);
		scanf("%s",arr[i].organisation);
		printf("Enter joining year of Employee %d : ",i + 1);
		scanf("%d",&arr[i].year_of_join);
		printf("Enter Salary of Employee %d : ",i + 1);
		scanf("%d",&arr[i].salary);
		printf("\n");
	}
	printf("NAME\tORGANISATION\tYEAR OF JOIN\tSALARY(LAKH per month)\n-----------------------------\n");
	for(i = 0; i < 6; i++){
		printf("%s\t%s\t%d\t%d\n",arr[i].name,arr[i].organisation,arr[i].year_of_join,arr[i].salary);
	}
	return 0;
}
