#include <stdio.h>

int main()
{
    int a=1;
    int b=++a + ++a + ++a;
    printf("a=%d\t b=%d\n",a,b);
    return 0;
}
