#include<stdio.h>
#include<math.h>
int main()
{
	float km,m,cm,inch,feet;
	scanf("%f",&km);
	m=km*1000;
    cm=km*10000;
	inch=km*39370.0787;
	feet=km*3280.8399;
	printf("distance in meters is %f\n",m);
	printf("distance in centimeters is %f\n",cm);
	printf("distance in inches is %f\n",inch);
	printf("distance in feets is %f\n",feet);
	return 0;
}
