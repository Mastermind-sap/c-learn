/*********************
Question: Write a program to find the greatest among five numbers using if else.
********************/

#include <stdio.h>

int main()
{
int a,b,c,d,e;
printf("Enter a number:");
scanf("%d",&a);
printf("Enter a number:");
scanf("%d",&b);
printf("Enter a number:");
scanf("%d",&c);
printf("Enter a number:");
scanf("%d",&d);
printf("Enter a number:");
scanf("%d",&e);

if ((a>b) && (a>c) && (a>d) && (a>e))
	printf ("%d is the greatest number",a);
else if ((b>a) && (b>c) && (b>d) && (b>e))
	printf ("%d is the greatest number",b);
else if ((c>a) && (c>b) && (c>d) && (c>e))
	printf ("%d is the greatest number",c);
else if ((d>a) && (d>b) && (d>c) && (d>e))
	printf ("%d is the greatest number",d);
else if ((e>a) && (e>b) && (e>c) && (e>d))
	printf ("%d is the greatest number",e);
else
	printf("More than one numbers are the greatest among the five");
return 0;
}

