#include <stdio.h>

int main(void) 
{
	int a,b,i;
	char oper;
	for(i=0;i<4;i++)
	{
	scanf("%d %c %d",&a,&oper,&b);
	if(oper=='/')
	printf("%d\n",a/b);
	else
	printf("%d\n",a%b);
	}
	return 0;
}
