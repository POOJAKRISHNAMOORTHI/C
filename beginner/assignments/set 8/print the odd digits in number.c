#include <stdio.h>

int main(void) {
	int n,num;
	scanf("%d",&n);
	while(n!=0)
	{
		num=n%10;
		if(num%2!=0)
		{
			printf("%d\t",num);
		}
		n=n/10;
	}
	return 0;
}
