#include<stdio.h>
float aggregate_of_marks(float s1,float s2,float s3,float s4,float s5,float agg){
	agg=(s1+s2+s3+s4+s5)/500;
	return agg;
}
float percentage_for_marks(float s1,float s2,float s3,float s4,float s5,float percent){
	percent=((s1+s2+s3+s4+s5)/500)*100;
	return percent;
}
int main()
{
	float s1,s2,s3,s4,s5,agg,percent;
	scanf("%f %f %f %f %f",&s1,&s2,&s3,&s4,&s5);
	agg=aggregate_of_marks(s1,s2,s3,s4,s5,agg);
	percent=percentage_for_marks(s1,s2,s3,s4,s5,percent);
	printf("aggregate is %f\n",agg);
	printf("percentage is %f\n",percent);
	return 0;
}
