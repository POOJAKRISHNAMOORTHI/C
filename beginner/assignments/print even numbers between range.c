#include <stdio.h>
int main(void) 
{
	int start,end,i,n=0;
	scanf("%d %d",&start,&end);
	for(i=n+2;i<=end;i+=2)
	{
		if(i%2==0)
	    {
	    	printf("%d ",i);
	    }
	}
	return 0;
}
