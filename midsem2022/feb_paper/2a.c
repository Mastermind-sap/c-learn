#include <stdio.h>

// will give error not return type of main declared
//main ( )
//{
//int num ;
//num = f u n c ( 2 0 ) ;
//p r i n t f ( ”%d” , num) ;
//}
//int f u n c ( int num)
//{
//num > 20 ? return ( 1 0 0 ) : return ( 2 0 0 ) ;
//}
int func(int num)
{
return num>20?100:200;
}
int main()
{
int num;
num=func(20);
printf("%d",num);
}

