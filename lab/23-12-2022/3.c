#include <stdio.h>

void input(int r,int c,int a[][c])
{
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            {
                printf("Element[%d][%d]:",i,j);
                scanf("%d",&a[i][j]);
            }
}

void print(int r,int c,int a[][c])
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
                printf("%d ",a[i][j]);
        printf("\n");
    }
}

int multiply(int r1,int c1,int a[][c1],int r2,int c2,int b[][c2],int c[][c2])
{
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            int sum=0;
            for(int k=0;k<r2;k++)
            {
                sum+=(a[i][k]*b[k][j]);
            }
            c[i][j]=sum;
        }
    }
}

void main()
{
    int r1,c1,r2,c2;
    printf("Enter number of rows of first matrix:");
    scanf("%d",&r1);
    printf("Enter number of columns of first matrix:");
    scanf("%d",&c1);
    printf("Enter number of rows of second matrix:");
    scanf("%d",&r2);
    printf("Enter number of columns of second matrix:");
    scanf("%d",&c2);
    if (c1!=r2)
    {
        printf("Multiplication not possible");
        return;
    }    
    int a[r1][c1],b[r2][c2],c[r1][c2];
    printf("Enter elements of first matrix:\n");
    input(r1,c1,a);
    printf("Enter elements of second matrix:\n");
    input(r2,c2,b);
    printf("First matrix:\n");
    print(r1,c1,a);
    printf("Second matrix:\n");
    print(r2,c2,b);
    multiply(r1,c1,a,r2,c2,b,c);
    printf("Resultant matrix:\n");
    print(r1,c2,c);
}