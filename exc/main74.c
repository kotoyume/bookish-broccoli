#include <stdio.h>

struct date
{
    int year;
    int month;
    int day;
};

int day(struct date d1)
{
    int days = 0, i;
    for ( i = 1970; i < d1.year; i++)
    {
        int d = 365;
        if (i % 100 != 0 && i % 4 == 0)
            d = 366;
        if (i % 400 == 0)
            d = 366;
        days = days + d;
    }
    int a[12] = {
        31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
        };
    if (d1.year % 100 != 0 && d1.year % 4 == 0)
        a[1] = 29;
    if (d1.year % 400 == 0)
        a[1] = 29;
    for ( i = 0; i < d1.month - 1; i++)
    {
        days = days + a[i];
    }
    days = days + d1.day;
    return days;

};

struct date adddays(struct date d1, int k, int days)
{
    struct date d3;
    int count = 1970, i;
    days = days + k;
    for ( i = 0; ; i++)
    {
        int d =365;
        if (count % 100 != 0 && count % 4 == 0)
            d = 366;
        if (count % 400 == 0)
            d = 366; 
        if(days <= d)
            break;
        count ++;
        days -= d;  
    }
    d3.year = count;
    count = 1;
    int a[12] = {
        31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
        };
    if (d3.year % 100 != 0 && d3.year % 4 == 0)
        a[1] = 29;
    if (d3.year % 400 == 0)
        a[1] = 29;
    for ( i = 0; ; i++)
    {
        if (days <= a[i])
        {
            break;
        }
        days -= a[i];
        count ++;
    }
    d3.month = count;
    d3.day = days;
    return d3;
}

void print(struct date d2)
{
    printf("%d-%d-%d", d2.year, d2.month, d2.day);
}
int main(int argc, char* argv[])
{
    
    struct date d1, d2;
    int k;
    scanf("%d %d %d",&d1.year,&d1.month,&d1.day);
    scanf("%d", &k);
    int days = day(d1);
    d2 = adddays(d1, k, days);
    print(d2);
    return 0;
}
