#include <stdio.h>
#include <math.h>

void main()
{
	int n,rev,size;
	printf("Enter number that needs to be reversed:");
	scanf("%d",&n);
	int n1=n;
	while(n1!=0)
	{
		size+=1;
		n1/=10;
	}
	int i=size-1;
	while(n!=0)
	{
		int rem=n%10;
		rev+=rem*pow(10,i);
		i--;
		n/=10;
	}
	printf("Reversed number:%d",rev);
}
