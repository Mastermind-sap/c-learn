#include <stdio.h>
#include <math.h>

int  binaryToDec(int n)
{
    int i=0,dec=0;
    while (n!=0)
    {
        int r=n%10;
        dec+=(r*pow(2,i));
        i++;
        n/=10;
    }
    return dec;
}

void main()
{
    printf("Enter binary number:");
    int b;
    scanf("%d",&b);
    int d=binaryToDec(b);
    printf("Hexadecimal conversion: %x",d);
}
