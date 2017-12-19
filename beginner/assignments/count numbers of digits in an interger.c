#include<stdio.h>
int main()
{
int count=0,n;
printf("enter the number:\n");
scanf("%d",&n);
while(n!=0)
{
n=n/10;
count++;
}
printf("number of digits in an integer is %d",count);
return 0;
}
