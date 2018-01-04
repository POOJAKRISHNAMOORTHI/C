#include <stdio.h>

int main(void) 

{
	
int i,a[100],n,k,sum=0;
	
scanf("%d",&n);
	
scanf("%d",&k);
	
for(i=0;i<n;i++)
	
{
		
scanf("%d",&a[i]);
	
}
	
	
for(i=0;i<k;i++)
	
{
    
sum=sum+a[i];
    
}
    
printf("the sum is %d",sum);
	
return 0;

}
