#include <stdio.h>
#include<string.h>
int main(void) 
{
    char a[40],temp;
    int l,i;
    printf("enter the string:\n");
    scanf("%s",a);
    l=strlen(a);
    for(i=0;i<=l;i=i+2)
    {
    	temp=a[i];
    	a[i]=a[i+1];
    	a[i+1]=temp;
    }
    printf("string is %s",a);
	return 0;
}
