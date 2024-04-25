#include<stdio.h>
#include<math.h>
int main()
{
	int a,n,i,j,k,m=0,x=0;
	scanf("%d",&n);
	for(i=2;i>0;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				m++;
			}
		}
		if(m==2)
		x++;
		m=0;
		
		if(x==n)
	{   printf("%d",i);
			break ;
	}
	}
	
}
