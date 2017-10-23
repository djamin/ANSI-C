#include<stdio.h>
#include <math.h>
int add(int a, int b)
{
    int result=a+b;
}
int sub(int a,int b)

{
    int result= a-b;
}
int main()
{
    int a=20, b=10;
    int x,y;
    x=add(a,b);
    y=sub(a,b);
    printf("a+b = %d , a-b = %d\n",x,y);
    return 0;
}
