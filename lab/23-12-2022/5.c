#include <stdio.h>

int sum(int n)
{
    static int s=0;
    if(n>0)
    {
        s+=n;
        sum(n-1);
    }
    return s;
}

void main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    int res=sum(n);
    printf("Sum of numbers from 1 to %d: %d",n,res);
}