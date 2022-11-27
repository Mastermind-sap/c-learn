#include <stdio.h>

int main()
{
int a=4;
printf("The size of char=%ld\n", sizeof(char));
printf("The size of short int=%ld\n", sizeof(short int));
printf("The size of unsigned short int=%ld\n", sizeof(unsigned short ));
printf("The size of a=%ld\n", sizeof (a));
printf("The size of int=%ld\n", sizeof(int));
printf("The size of unsigned int=%ld\n", sizeof(unsigned int)); 
printf("The size of long int=%ld\n", sizeof(long int));
printf("The size of unsigned long int=%ld\n", sizeof(unsigned long int)); 
printf("The size of long long int=%ld\n", sizeof(long long int));
printf("The size of float=%ld\n", sizeof(float));
printf("The size of double=%ld\n", sizeof(double));
printf("The size of long double=%ld\n", sizeof(long double)); 
return 0;
}
