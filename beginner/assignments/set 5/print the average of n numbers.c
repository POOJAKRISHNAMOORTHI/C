#include <stdio.h>

int main(void) {
	int a[100],i,n,sum=0,average;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
		average=sum/n;
	}
	printf("%d",average);
	return 0;
}
