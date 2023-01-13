#include <stdio.h>
#include<math.h>

void main()
{
double sum=1;
printf("Enter x:");
int x;
scanf("%d",&x);
printf("Enter n:");
int n;
scanf("%d",&n);
for(int i=1,j=1;j<n;j++)
{
if (j%2==0)
sum+=((pow(x,++i)/((++i)*(++i))));
else
sum-=((pow(x,++i)/((++i)*(++i))));
++i;
}
printf("Sum: %f",sum);
}
