#include <stdio.h>

int ceilh(float n)
{
int m=(int)n;
if (n-m>0)
return m+1;
}
void printSp(int n,int a[][n],int m)
{
for(int i=0;i<ceilh(m/2.0);i++)
{
for(int j=0+i;j<n-i;j++)
	printf("%d ",a[i][j]);
for(int k=i+1;k<m-2*i;k++)
	printf("%d ",a[k][n-1-i]);
for(int j=n-i-1-1;j>=i;j--)
	printf("%d ",a[m-i-1][j]);
for(int l=m-2*i-1-1;l>i;l--)
	printf("%d ",a[l][i]);
}
}

void main()
{
int m,n;
printf("Enter number of row:");
scanf("%d",&m);
printf("Enter number of columns:");
scanf("%d",&n);
int a[m][n];
printf("Enter elements:\n");
for(int i=0;i<m;i++)
for(int j=0;j<n;j++)
scanf("%d",&a[i][j]);
printf("The original array is:\n");
for(int i=0;i<m;i++)
{
for(int j=0;j<n;j++)
{printf("%d ",a[i][j]);
}
printf("\n");
}
printf("The original array printed in spiral is:\n");
printSp(n,a,m);
}
