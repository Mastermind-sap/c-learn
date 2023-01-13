#include <stdio.h>

void main()
{
	int sum=0,i=0;
	while(1)
	{
		printf("Enter n:");
		int n;
		scanf("%d",&n);
		if(n%2==0)
		{
			sum+=n;
			i++;
		}
		else
			break;
	}
	printf("Number of even integers: %d\nSum of even integers: %d\n",i,sum);
}
