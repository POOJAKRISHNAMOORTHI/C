
#include<stdio.h>

int main()
 
{
	
int n,x,rev=0,temp;
	
scanf("%d",&n);
	
temp=n;
	
while(n!=0)
	
{
		
x=n%10;
		
rev=rev*10+x;
		
n=n/10;
	
}
	
printf("reverse of a number is %d\n",rev);
	
if(temp==rev)
	
printf("yes");
	
else
	
printf("No");

}