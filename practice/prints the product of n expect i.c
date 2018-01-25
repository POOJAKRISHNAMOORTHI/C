#include <stdio.h>

int main(void) {
	int i,j,a[100],k[100],n,product=1;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		product=1;
		for(j=0;j<n;j++)
		{
			if(a[i]==a[j]);
			
			else
			{
			product=product*a[j];
			}
		}
		k[i]=product;
	
	}

	for(i=0;i<n;i++)
	{
	printf("%d\t",k[i]);
	}
	return 0;
}
