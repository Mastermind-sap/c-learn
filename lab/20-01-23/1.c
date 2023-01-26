#include <stdio.h>
#include<math.h>
#include <stdlib.h>

void input(int r,int c,int a[][c])
{
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            {
                a[i][j]=rand();
            }
}

double compute(int m,int n,int a[][n],int b[][n])
{
    double res=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            res+=sqrt(abs(pow(a[i][j],2)-pow(b[i][j],2)));
        }
    }
    res/=(m*n);
    return res;
}

void update(int r,int c,int a[][c],int b[][c],int mu)
{
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            {
                a[i][j]/=mu;
                b[i][j]/=mu;
            }
}

void main()
{
    int m,n;
    printf("Enter m:");
    scanf("%d",&m);
    printf("Enter n:");
    scanf("%d",&n);
    int a[m][n],b[m][n];
    input(m,n,a);
    input(m,n,b);
    double mu=compute(m,n,a,b);
    printf("Result:%d\n",mu);
    update(m,n,a,b,mu);
}