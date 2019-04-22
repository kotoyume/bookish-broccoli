#include <stdio.h>
int isValued (int m)
{
    int i,n,sum = 0;
    for(i = 1; i < m; i++)
    {
        if(m % i == 0)
            sum = sum + i;
    }
    if(sum == m)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}
int main ()
{
    int isValued (int m);
    int m;
    scanf("%d",&m);
    if (isValued (m))
    {
        printf("是完数");
        // printf("1");
    }
    else
    {
        printf("不是完数");
        // printf("0");
    }
    return 0;
}