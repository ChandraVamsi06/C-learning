#include<stdio.h>
int main()
{
    // bitwise operators
    // (&,|,^,>>,<<,~)
    // examples
    int a= 10;
    int b= 6;
    // 10 --> 1 0 1 0
    //  6 --> 0 1 1 0
    // ---------------
    //  2 -->   0 0 1 0 //and
    // 14 -->   1 1 1 0 //or
    // 12 -->   1 1 0 0 //xor
    //  5 -->   0 1 0 1 // a right shift by 1
    //  3 -->   0 0 1 1 // b right shift by 1
    // 20 --> 1 0 1 0 0 // a left shift by 1
    // 12 --> 0 1 1 0 0 // b left shift by 1
    int c = a & b;
    int d = a | b;
    int e = a ^ b;
    int f = a >> 1;
    int g = b >> 1;
    int h = a << 1;
    int i = b << 1;
    printf("%d\n",c);
    printf("%d\n",d);
    printf("%d\n",e);
    printf("%d\n",f);
    printf("%d\n",g);
    printf("%d\n",h);
    printf("%d\n",i);
}
