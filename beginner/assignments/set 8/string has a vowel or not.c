#include <stdio.h>

int main(void) 
{
	char str[100],str1[15]="aeiouAEIOU";
	int n,count=0,i,j;
	scanf("%s",str);
	n=strlen(str);
	for(i=0;str[i]!='\0';i++)
	{
		for(j=0;str1[j]!='\0';j++)
		{
			if(str[i]==str1[j])
			{
				count++;
			}
		}
	}
	if(count>0)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	
	return 0;
}
