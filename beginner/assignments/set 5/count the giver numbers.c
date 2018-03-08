#include <stdio.h>

int main(void) 
{
	int n,i,count=0;
	scanf("%d",&n);
	while(n)
	{
	     n=n/10;
                 count++;
		
	}
	
	printf("%d",count);

	return 0;
}
