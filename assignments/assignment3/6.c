#include <stdio.h>

void main()
{	
	int n;
	printf("Enter the n th term upto which the fibonacci series is to be printed:");
	scanf("%d",&n);
	printf("The required fibonacci series is:\n");
	int a=0,b=1;
	while(a<=n)
	{
		printf("%d, ",a);
		int temp=b;
		b=a+b;
		a=temp;
	}
}
