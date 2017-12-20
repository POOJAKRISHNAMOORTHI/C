#include <stdio.h>

int main(void) 
{
	int arr[100],i=0,j,temp,n,p;
	printf("enter the num:\n");
	scanf("%d",&n);
	printf("enter the num of rotation:\n");
	scanf("%d",&p);
	printf("enter the array:\n" );
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
		
	for(i=1;i<=p;i++)
	{
		temp=arr[0];
		for(j=0;j<n-1;j++)
		{
			arr[j]=arr[j+1];
		}
		arr[n-1]=temp;
	}
	for(i=0;i<n;i++)
	{
	printf("%d",arr[i]);
	}
	return 0;
}

