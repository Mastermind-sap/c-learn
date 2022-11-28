#include <stdio.h>
#include <stdlib.h>
int main()
{
int x=rand();
int y=rand();
int z=y^((x^y)&-(x<y));
printf("%d\n",z);
return 0;
}
