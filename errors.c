#include <stdio.h>

// warning: function returns address of local variable 
int *dangling(){
    int i=0;
    return &i;
}
int main(){
    int *p=dangling();
    printf("%d",p);

}