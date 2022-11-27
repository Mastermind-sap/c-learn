/*****************
Question:Write a program to rotate bits of a number in C, either right or left.
****************/

#include <stdio.h>
#include <math.h>

int main()
{
int number,bits,choice;
printf("Enter the number to be rotated:");
scanf("%d",&number);
printf("Enter the number of bits to be rotated:");
scanf("%d",&bits);
printf("Enter 1 for right rotation \nand 2 for left rotation:");
scanf("%d",&choice);
int numberOfBits=0,n=number;
while (n>=1)
{
numberOfBits+=1;
n=n/2;
}
int eraser=~((int)(pow(2,bits)-1)<<(numberOfBits-bits));
int result;
printf("%d\n",eraser);
printf("%d\n",numberOfBits);
switch(choice)
{
case 1:
result=((number>>bits)|((number<<(numberOfBits-bits))&eraser));
printf("%d\n%d",(number>>bits),((number<<(numberOfBits-bits))&eraser));
break;
case 2:
result=((number<<bits)|(number>>(numberOfBits-bits)))&eraser;
break;
default:
printf("Wrong choice");
return 0;
}
printf("Result: %d",result);
return 0;
}
