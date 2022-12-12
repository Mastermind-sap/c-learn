#include <stdio.h>

int nthFibonacci(int n)
{
	int a=0,b=1;
	for(int i=1;i<n;i++)
	{
		int temp=a;
		a=b;
		b+=temp;
	}
	return a;
}

void main()
{	
	int n;
	printf("Enter n:");
	scanf("%d",&n);
	printf("Nth fibonacci number is:%d",nthFibonacci(n));
}
