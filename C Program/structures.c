#include<stdio.h>
struct Student{
	char name[20];
	int age;
};
int main()
{
    struct Student s1;
    printf("Enter Name : ");
    scanf("%[^\n]s",s1.name);
    printf("Enter age : ");
    scanf("%d",&s1.age);
    printf("Name\tAge\n----------------\n");
    printf("Name is : %s\t",s1.name);
    printf("Age is : %d\n",s1.age);
    return 0;
}
