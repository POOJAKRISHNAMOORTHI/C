#include <stdio.h>
 
int main(void)
{
	int i,b,p,power=1;
	scanf("%d",&b);
	scanf("%d",&p);
	for(i=0;i<p;i++)
	{
		power=power*b;
	}
	printf("%d",power);
	return 0;
}