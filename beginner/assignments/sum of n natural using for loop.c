#include<stdio.h>
int main()
{
int i=1,sum=0,n;
printf("enter the number:\n");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
sum=sum+i;
}
printf("sum=%d",sum");
return 0;
}
