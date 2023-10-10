#include<stdio.h>
float area_of_circle(float r,float area){
	area=3.14*r*r;
	return area;
} 
float circumference_of_circle(float r,float cir){
	cir=2*3.14*r;
	return cir;
}
int main()
{
	float r,area,cir;
	scanf("%f",&r);
	area=area_of_circle(r,area);
	cir=circumference_of_circle(r,cir);
	printf("area of circle is %f",area);
	printf("circumference of circle is %f",cir);
	return 0;
}
