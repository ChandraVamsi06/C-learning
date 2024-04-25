#include<stdio.h>
struct Student{
	char name[20];
	int age;
};
int main()
{
	int a;
	printf("%d\n",sizeof(a));
	struct Student s1;
	printf("%d",sizeof(s1));
	return 0;
}
