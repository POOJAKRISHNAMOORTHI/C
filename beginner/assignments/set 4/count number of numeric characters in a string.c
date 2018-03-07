#include <stdio.h>

int main(void) 
{
	char str[20];
	int i,a=0;
	scanf("%[^\n]s",str);
	
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='0' && str[i]<='9')
		{
			a++;
		}
	}
    printf("%d",a);
	
	
	return 0;
}
