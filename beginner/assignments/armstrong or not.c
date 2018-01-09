#include<stdio.h>
int main(void) 
{
  int n,x,sum=0,temp;
  scanf("%d",&n);
  temp=n;
  while(n>0)
  {
  x=n%10;
  sum=sum+x*x*x;
  n=n/10;
  }
  if(sum==temp)
  {
  	printf("yes");
  }
  else
  {
           printf("no");
  }
}
