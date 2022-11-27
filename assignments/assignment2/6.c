/*****************
Question: How to toggle a particular bit in C?
****************/

#include <stdio.h>
int main()
{
int number,position;
printf("Enter the number:");
scanf("%d",&number);
printf("Enter the position from LSB whose bit needs to be toggled:");
scanf("%d",&position);
int result=number^(1<<position);
printf("Result: %d",result);
return 0;
}

