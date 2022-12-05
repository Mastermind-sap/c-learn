#include <stdio.h>

void main()
{
    for(int i=1;i<=4;i++)
    {   
        for(int s=3-i;s>=0;s--)
        {
            printf("\t");
        }
        for(int j=1;j<=i;j++)
        {
            printf("%d\t",j);
        }
        for(int k=i-1;k>=1;k--)
        {
            printf("%d\t",k);
        }
        printf("\n");
    }
}
