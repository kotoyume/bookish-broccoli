#include<stdio.h>
int main()
{
    int a,b,c,m;
    scanf("%d,%d,%d",&a,&b,&c);
    if(b>a)
    {
        m=a;
        a=b;
        b=m;
    }
    if(c>a)
    {
        m=a;
        a=c;
        c=m;
    }
    if(c>b)
    {
        m=b;
        b=c;
        c=m;
    }
    printf("%d,%d,%d",c,b,a);
    return 0;
}