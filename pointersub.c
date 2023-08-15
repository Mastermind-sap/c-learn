#include <stdio.h>

int main(){
    int a[]={9,2,30,40,5,6},*ip=a;
    printf("%d\n",a[-3]);
    printf("%d\n",*(ip-3));
    printf("%d\n",*ip-3);
    printf("%d\n",*ip+3);
    printf("%d\n",*(ip+3));
}