#include <stdio.h>

int main(void) {
	char str[100];
	int i,k;
	scanf("%s",str);
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		printf("%c",str[i]);
	}
	return 0;
}
