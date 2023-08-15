#include <stdio.h>

int main() {
    int a[] = {11, 2, 3, 80, 5, 6};
    int *p = &a[3];
    int *q = &a[5];
    printf("%d\n", p<=q);//compares only position and not value
    printf("%d\n", *p<=*q);
    printf("%d\n", p>=q);
    q = &a[3];
    printf("%d", p==q);
    return 0;
}