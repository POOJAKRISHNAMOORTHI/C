#include<stdio.h>
int main(void) 
{
  int i,j,start,end,count;
  scanf("%d %d",&start,&end);
  for(i=start;i<=end;i++)
  {
         count=0;
         for(j=1;j<=i;j++)
         {
	if(i%j==0)
	 count++;
	
         }
         if(count==2)
          printf("%d\t",i);
  }
}
