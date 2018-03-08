#include <stdio.h>

int main(void) 
{
	int product,a,b;
	scanf("%d %d",&a,&b);
	product=a*b;
	if(product%2==0)
	{
		printf("even");
	}
	else
	printf("odd");
return 0;
}	
