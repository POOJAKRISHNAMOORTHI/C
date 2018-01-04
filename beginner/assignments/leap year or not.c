#include <stdio.h>


int main(void) 

{
int year;
	
printf("enter the year:\n");
	
scanf("%d",&year);
	
if (((year % 4 == 0) && (year % 100!= 0)) || (year%400 == 0))
	
{
            
printf("%d is a leap year", year);
	
}
   
           
else
            
{
           
printf("%d is a notleap year", year);
	
}
  
	
return 0;

}
