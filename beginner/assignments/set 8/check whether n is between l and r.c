#include <stdio.h>

int main(void) {
	int l,r,n;
	scanf("%d",&n);
	scanf("%d %d",&l,&r);
	if(n>l&&n<r)
	{
		printf("yes");
	}
	else
	{
	    printf("no");
	}
	return 0;
}
