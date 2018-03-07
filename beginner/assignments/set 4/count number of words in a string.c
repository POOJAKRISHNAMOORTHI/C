#include <stdio.h>

int main(void) 
{
	char str[100];
	int i,len,a=0;
	scanf("%[^\n]s",str);
	
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		{
			a++;
		}
	}
    printf("%d",a + 1);
	
	
	return 0;
}
