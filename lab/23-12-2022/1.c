#include <stdio.h>

int gcd(int a,int b)
{
    int i=(a>b)?b:a;
    for(;i>=1;i--)
    {
        if((a%i==0)&&(b%i==0))
            return i;
    }
}

void main()
{
    int a,b;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    int g=gcd(a,b);
    printf("GCD:%d\n",g);
}