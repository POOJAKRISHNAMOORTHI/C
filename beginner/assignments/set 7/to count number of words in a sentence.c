#include <stdio.h>

int main(void) 
{
	char str[100];
	int i,count=0;
	scanf("%[^\n]s",str);
	
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		{
			count++;
		}
	}
	printf("%d",count + 1);
	return 0;
}
