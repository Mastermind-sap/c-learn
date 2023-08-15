#include <stdio.h>

//error: assignment of read-only location '*p'
void fun(const int *p)
{
    *p=0;
}
int main(){
    const int a=10;
    fun(&a);

}