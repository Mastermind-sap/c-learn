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

void major(int r,int c,int a[][c])
{
    printf("Major diagonal elements are:\n");
    for(int i=0;i<r;i++)
        printf("%d  ",a[i][i]);
    printf("\n");
}


void minor(int r,int c,int a[][c])
{
    printf("Minor diagonal elements are:\n");
    for(int j=0;j<r;j++)
        printf("%d  ",a[j][c-j-1]);
    printf("\n");
}

void main()
{
    int r,c;
    printf("Enter number of rows of matrix:");
    scanf("%d",&r);
    printf("Enter number of columns of matrix:");
    scanf("%d",&c);
    int a[r][c];
    if(r!=c)
    {
        printf("Major and minor diagonal doesnt exist");
        return;
    }
    printf("Enter elements of matrix:\n");
    input(r,c,a);
    major(r,c,a);
    minor(r,c,a);
}