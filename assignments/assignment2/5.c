/***************************
Question: Write a program to check if an integer is a power of 2.
*****************************/

#include <stdio.h>

int main()
{
int number;
printf("Enter number which needs to be checked:");
scanf("%d",&number);
int check=1,n=number;
if (n== 0)
	check=0;
while (n != 1) {
	if (n % 2 != 0)
		{check=0;
		break;}
        n = n / 2;
    }
if (check==0)
	printf("%d is not a power of 2",number);
else
	printf("%d is a power of 2",number);
return 0;
}	 
