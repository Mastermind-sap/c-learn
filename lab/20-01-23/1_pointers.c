#include <stdio.h>
#include<math.h>
#include <stdlib.h>

void input(int r,int c,int *a)
{
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            {
                *(a+i*c+j)=rand()%256;
            }
}

double compute(int m,int n,int *a,int *b)
{
    double res=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            res+=sqrt(abs(pow(*(a+i*n+j),2)-pow(*(b+i*n+j),2)));
        }
    }
    res/=(m*n);
    return res;
}

void update(int r,int c,int *a,int *b,int mu)
{
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            {
                *(a+i*c+j)/=mu;
                *(b+i*c+j)/=mu;
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
    input(m,n,(int *)a);
    input(m,n,(int *)b);
    double mu=compute(m,n,(int *)a,(int *)b);
    printf("Result:%lf\n",mu);
    update(m,n,(int *)a,(int *)b,mu);
}