#include <stdio.h>

int fib(int n)
{
    if(n<=1)
        return n;
    else
        return fib(n-1)+fib(n-2);
}

void main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    int res=fib(n);
    printf("nth fibonacci number: %d",res);
}