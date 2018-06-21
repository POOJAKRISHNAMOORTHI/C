#include <stdio.h>
#include<math.h>
int main(void) 
{
int start,end,i,x,temp,sum=0;
scanf("%d",&start);
scanf("%d",&end);
for(i=start;i<end;i++)
{
	sum=0;
temp=i;
while(temp!=0)
{
x=temp%10;
sum=sum+x*x*x;
temp=temp/10;
}
if(sum==i)
{
printf("%d\n",sum);
}
else 
continue;
		
}
return 0;
}
