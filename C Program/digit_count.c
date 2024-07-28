#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int temp = n;
    int digit_cnt = 0;
    while(temp > 0){
        digit_cnt++;
        temp = temp/10;
        n++;
        printf("%d",digit_cnt);
    }
    return 0;
} 
