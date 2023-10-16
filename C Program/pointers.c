#include<stdio.h>
void update(int *a){
    *a += 10;
}
int main()
{
    int num1 = 15;
    int *a = &num1;
    update(*a);
    printf("%d",*a);
}
