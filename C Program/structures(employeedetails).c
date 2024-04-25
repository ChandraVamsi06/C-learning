#include <stdio.h>
struct employee {
	int id;
	char name[20];
	char org[20];
	float salary;
	int m_status;
};
typedef struct employee EMP;
void print_details(EMP e) {
	printf("%d\t%s\t%s\t%.2f\t%d\n", e.id, e.name, e.org, e.salary, e.m_status);
}
 
int main()
{
	EMP e1 = {1, "ABC", "AEC", 45000, 0};
	EMP e2 = {2, "XYZ", "AEC", 55000, 1};
	EMP e3 = {3, "PQR", "AEC", 65000, 0};
	EMP e4 = {4, "MNO", "AEC", 35000, 1};
	print_details(e1);
	print_details(e2);
	print_details(e3);
	print_details(e4);
}
