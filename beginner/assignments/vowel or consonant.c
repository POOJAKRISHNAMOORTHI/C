#include<stdio.h>
int main()
{
char x;
printf("enter the character:\n");
scanf("%c",&x);
if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='A'||X=='E'||X=='I'||X=='O'||X=='U')
{
printf("%c is vowel",x);
}
else
{
printf("%c is consonant",x);
}
return 0;
}
