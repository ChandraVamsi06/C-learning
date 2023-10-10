#include<stdio.h>
float temperature(float C,float F){
	C=((F-32)*5)/9;
	return C;
}
int main()
{
	float C,F;
	scanf("%f",&F);
	C=temperature(C,F);
	printf("temperatuer in celsius is %f",C);
	return 0;
}
