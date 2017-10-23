#include<stdio.h>
int main()
{
    int a,b,c;
    float x;
    scanf("%d%d%d",&a,&b,&c);
    x=(a)/(b-c);
    printf("a=%d, b=%d ,c=%d x=%.02f",a,b,c,x);

    return 0;
}
