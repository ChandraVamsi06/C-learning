#include<stdio.h>
float Area_of_rectangle(float l,float b,float area){
	area=l*b;
	return area;
}
float perimeter_of_rectangle(float l,float b,float perimeter){
	perimeter=2*(l+b);
	return perimeter;
}
int main()
{
	float l,b,area,perimeter;
	scanf("%f %f",&l,&b);
	area=Area_of_rectangle(l,b,area);
	perimeter= perimeter_of_rectangle(l,b,perimeter);
	printf("area of rectangle is %f\n",area);
	printf("perimeter of rectangle is %f\n",perimeter);
	return 0;
}
