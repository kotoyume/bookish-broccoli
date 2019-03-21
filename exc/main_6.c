#include <stdio.h>
int main()
{
    // 求最大公约数与最小公倍数
    int a,b,i,j = 0;
    int str[10];
    scanf("%d%d",&a,&b);
    int max = 0;
    for(i = 1;i <= 20;i ++)
    {
        if(a % i == 0 && b % i == 0)
        {
            max = i;
            str[j] = i;
            j = j + 1;
        }
    }
    int sum = 1;
    for(i = 0;i < j;i ++)
    {
        sum = sum * str[i];
    }
    int m = a * b / sum;
    printf("最大公约数为%d\n",max);
    printf("最小公倍数为%d\n",m);
    return 0;
}