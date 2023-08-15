#include <stdio.h>

int main(){
    int a[]={1,2,3,4,5,6},*ip=a+4;
    printf("%d\n",ip[a[ip[-3]]-3]);
    printf("%d\n",ip[a[ip[-3]]-3-5]);//garbage value printed
    printf("%d\n",ip[a[ip[-3]]-3+2]);//garbage value printed
    printf("%d\n",ip[-3]);
    printf("%d\n",a[ip[-3]]-3);
    return 0;
}