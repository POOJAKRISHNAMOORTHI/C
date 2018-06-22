#include <stdio.h>

int main(void) 
{
	int a,b,i;
	for(i=0;i<3;i++)
	{
		scanf("%d %d",&a,&b);
		if(a>b)
		printf("%d\n",a-b);
		else
		printf("%d\n",b-a);
	}
	return 0;
}
