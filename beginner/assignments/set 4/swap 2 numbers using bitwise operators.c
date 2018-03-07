#include <stdio.h>

int main(void) 
{
	int a,b,temp;
	scanf("\n%d",&a);
	scanf("\n%d",&b);
            a=a^b;
            b=a^b;
            a=a^b;
	printf("%d\t%d",a,b);
	return 0;
}
