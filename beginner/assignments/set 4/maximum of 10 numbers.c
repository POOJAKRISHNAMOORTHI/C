#include<stdio.h>
int main()
{
	int i,a[100],n=10,temp,j,max;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]<a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	
	
	}
	max=a[0];
	printf("%d",max);
	
	return 0;
}
