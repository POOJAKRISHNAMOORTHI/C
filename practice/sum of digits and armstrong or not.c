/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
	int sum=0,rem,arm=0,temp;
	Scanner ab=new Scanner(System.in);
	int n=ab.nextInt();
	temp=n;
	while(n!=0)
	{
		rem=n%10;
		sum=sum+rem;
		arm=arm+rem*rem*rem;
		n=n/10;
	}
	System.out.println("sum:" +sum);
	if(arm==temp)
		System.out.println("armstrong");
	else
	  System.out.println("not armstrong");
	
	}
}
