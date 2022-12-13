#include <stdio.h>

void armstrong_check(int n)
{
	int num=n;
	int sumOfCubes=0;
	while(n!=0)
	{
		int r=n%10;
		sumOfCubes+=(r*r*r);
		n/=10;
	}
	if(sumOfCubes==num)
		printf("%d is an Armstrong number",num);
	else
		printf("%d is not an Armstrong number",num);
}

void main()
{
	int number;
	printf("Enter a number:");
	scanf("%d",&number);
	armstrong_check(number);
}

