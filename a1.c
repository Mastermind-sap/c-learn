#include <stdio.h>
#define f(x) x+x
#define h(x) (x+x)
int main()
{
int a=f(4)*f(4); //24
int b=h(4)*h(4); //64
printf("The value of A= %d\n The value of B=%d\n",a,b);
return 0;
}
