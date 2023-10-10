#include<stdio.h>
float Area_of_square(float side,float area){
	area=side*side;
	return area;
}
float perimeter_of_square(float side,float perimeter){
	perimeter=4*side;
	return perimeter;
}
int main()
{
	float side,area,perimeter;
	scanf("%f",&side);
	area=Area_of_square(side,area);
	perimeter= perimeter_of_square(side,perimeter);
	printf("area of square is %f\n",area);
	printf("perimeter of square is %f\n",perimeter);
	return 0;
}
