#include <stdio.h>

void main(){
    int i=10;
    int *p=&i;
    printf("%p\n",&p);
    printf("%p\n",p);
    printf("%p\n",i);
    printf("%p\n",&i);
    printf("%p\n",10);
    printf("%x\n",&p);
    printf("%u\n",&p);
}