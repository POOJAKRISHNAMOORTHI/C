#include <stdio.h>
int main(void) 
{
	int start,end,i;
	scanf("%d %d",&start,&end);
	for(i=start;i<end;i++)
	{
		if(i%2==1)
	    {
	    	printf("%d ",i);
	    }
	}
	return 0;
}
