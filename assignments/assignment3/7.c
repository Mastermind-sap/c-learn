#include <stdio.h>
 
void main()
{
	int num;
	unsigned long int factorial=1;
	printf("Enter n:");
	scanf("%d",&num);
	for(int i=2;i<=num;i++)
	{
		factorial*=i;
	}
	printf("Factorial: %lu\n",factorial);
}
            
