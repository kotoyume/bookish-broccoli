#include <stdio.h>
int main()
{
    int a,b,c,d,e,f;
    scanf("%d",&a);
    if(a > 9999)
    {
        b = a / 10000;
        c = (a / 1000) % 10;
        d = (a / 100) % 10;
        e = (a / 10) % 10;
        f = a % 10;
        printf("%d%d%d%d%d",f,e,d,c,b);
    }
    if(a > 999 && a < 10000)
    {
        b = a / 1000;
        c = (a / 100) % 10;
        d = (a / 10) % 10;
        e = a % 10;
        printf("%d%d%d%d",e,d,c,b);
    }
    if(a > 99 && a < 1000)
    {
        b = a / 100;
        c = (a / 10) % 10;
        d = a % 10;
        printf("%d%d%d",d,c,b);
    }
    if(a > 9 && a < 100)
    {
        b = a / 10;
        c = a % 10;
        printf("%d%d",c,b);
    }
    if(a > 0 && a < 10)
    printf("%d",a);
    return 0;
}