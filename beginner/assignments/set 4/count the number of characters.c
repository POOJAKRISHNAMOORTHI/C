#include <stdio.h>

int main(void) 
{
	char str[100];
	int i,len,a=0;
	scanf("%[^\n]s",str);
	
	for(i=0;str[i]!='\0';i++)
	{
		a=a+1;
	}
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		{
			a=a-1;
		}
	}
    printf("%d",a);
	
	
	return 0;
}
