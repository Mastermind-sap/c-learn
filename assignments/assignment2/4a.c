#include <stdio.h>
#include <stdlib.h>

int main()
{
int a=rand();
int b=rand();
int c=~(~(~a&b)&~(a&~b));
printf("%d\n",c);
return 0;
}
