#include <stdio.h>

int main(void) 
{
	int n1=0,n2=1,n3,i,n;
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		printf("%d\n",n1);
		n3=n1 + n2;
		n1=n2;
		n2=n3;
		
	}
	return 0;
}
