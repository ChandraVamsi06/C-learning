#include<stdio.h>
struct Student{
	char name[20];
	int age;
};
typedef struct Student STU;
int main()
{
	int i;
	STU arr[4];
	for(i = 0; i < 4; i++){
		printf("Enter name of Student %d : ",i + 1);
		scanf("%s", arr[i].name);
		printf("Enter age of Student %d : ",i + 1);
		scanf("%s", arr[i].age);
	}
	printf("NAME\t   AGE\n---------------------------------------\n");
	for(i = 0; i < 4; i++){
		printf("%s\t%d\n",arr[i].name,arr[i].age);
	}
	return 0;
}
