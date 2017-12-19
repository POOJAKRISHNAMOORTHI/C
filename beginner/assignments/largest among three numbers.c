include<stdio.h>
int main()
{
int a,b,c;
printf("enter a:\n");
scanf("%d",&a);
printf("enter b:\n");
scanf("%d",&b);
printf("enter c:\n");
scanf("%d",&c);
if(a>b && a>c)
{
printf("largest number is %d",a);
}
else if(b>a && b>c)
{
printf("largest number is %d",b);
}
else
{
printf("largest number is %d",c);
}
return 0;
}

