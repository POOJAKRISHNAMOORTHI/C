#include<stdio.h>
int main()
{
char x;
printf("enter the alphabet:\n");
scanf("%d",&x);
if((x>=65 && x<=96)||(x>=97 && x<=122))
{
printf("%c is an alphabet",x);
}
else
{
printf("%c is not an alphabet",x); 
}
return 0;
}

