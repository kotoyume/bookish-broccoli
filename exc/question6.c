#include<stdio.h>
int main()
{
    int n,i,j=0;
    scanf("%d",&n);
    int year = n/10000;
    int month = (n/100)%100;
    int day = n%100;
    int a[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if(year%100 != 0 && year%4 == 0)
        a[1]=29;
    if(year%400 == 0)
        a[1]=29;
    for(i=1;i<month;i++)
    {
        j=j+a[i];
    }
    j=j+day;
    printf("%d",j);

    return 0;
}
