/* QUICK SORT*/
#include<stdio.h>
int partion(int *arr,int l,int h)
{
	int res[(h-l)+1];
	int j,i,k=0,b;
	int p=arr[l];
	for(i=l+1;i<=h;i++)
	{
		if(arr[i]<=p)
		{
		res[k]=arr[i];
		k++;
	    }
	}
	int a=k+l;
	res[k]=p;
	k++;
	for(j=l+1;j<=h;j++)
	{
		if(arr[j]>p)
		{
		res[k]=arr[j];
		k++;
	    }
	}
	k=0;
	for(b=l;b<=h;b++)
	{
		arr[b]=res[k];
		k++;
	}
	return a;
}
void quick_sort(int *arr,int l,int h)
{
	if(l<h)
	{
		int p=partion(arr,l,h);
		quick_sort(arr,l,p);
		quick_sort(arr,p+1,h);
	}
}
int main()
{
	int n,i,j;
	scanf("%d",&n);
    int arr[n];
    for(j=0;j<n;j++)
    scanf("%d",&arr[j]);
    quick_sort(arr,0,n-1);
   	for(i=0;i<n;i++)
	printf("%d ",arr[i]);
}
