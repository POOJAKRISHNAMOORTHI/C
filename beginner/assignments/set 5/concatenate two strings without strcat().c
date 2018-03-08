#include <stdio.h>
 
int main(void) 
{
	char str1[1000],str2[1000];
	int i,k,len1,len2;
	scanf("%s",str1);
	scanf("%s",str2);
	len1=strlen(str1);
	len2=strlen(str2);
	for(i=0;i<len2;i++)
	{
	str1[len1]=str2[i];
	len1++;
	}
	printf("%s",str1);
	return 0;
}
