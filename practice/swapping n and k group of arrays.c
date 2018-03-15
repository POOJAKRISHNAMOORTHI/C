#include <stdio.h>

int main(void) {
	int a[100],i,n,k,m;
	scanf("%d",&n);
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	m=n-k;
	for(i=m;i<n;i++)
	{
		printf("%d",a[i]);
	}
	for(i=0;i<n-k;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}
