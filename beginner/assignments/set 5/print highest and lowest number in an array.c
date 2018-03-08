#include <stdio.h>

int main(void) 
{
	int a[100],i,j,n,temp,max,min;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	min=a[0];
	for(i=1;i<n-1;i++)
	{
		if(a[i]>max)
		{
	              max=a[i];
		}
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	
	printf("%d\t%d",max,min);
	return 0;
}
