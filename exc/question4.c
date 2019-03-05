#include<stdio.h>
int main()
{
    int year,a;
    scanf("%d",&year);
    a=year%100;
    if(a==0)
        (year%400==0) ? printf("yes") : printf("no");
    else
        (year%4==0) ? printf("yes") : printf("no");
    return 0;

}
