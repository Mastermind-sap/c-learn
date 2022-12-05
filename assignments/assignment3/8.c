#include <stdio.h>
#include <math.h>

int main()
{
	int n,x;
	printf("Enter n:");
	scanf("%d",&n);
	printf("Enter x:");
	scanf("%d",&x);
	double sum1=0,sum2=0,sum3=0;
	for(int i=1;i<=n;i++)
		sum1+=(1.0/i);
	for(int i=1;i<=n;i++)
		sum2+=(1.0/pow(x,i));
	for(int i=1;i<=n;i++)
		sum3+=(1.0/pow(2,i));
	printf("Sum of first series: %f\n",sum1);
	printf("Sum of second series: %f\n",sum2);
	printf("Sum of third series: %f\n",sum3);
}
