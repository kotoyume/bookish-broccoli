#include <stdio.h>

int main ()
{
    int gcd(int x, int y);
    int lcm(int x, int y);
    int x, y;
    scanf("%d,%d", &x, &y);
    printf("最大公约数是%d\n", gcd(x, y));
    printf("最小公倍数是%d\n", lcm(x, y));
    return 0;
}
// 最大公约数
int gcd(int x, int y)
{
    int m = x < y ? x : y;
    int i, n = 1;
    for (i = 1; i <= m; i++)
    {
        if (x % i == 0 && y % i == 0) 
        {
            if (n < i) 
            {
                n = i;
            }
        }
    }
    return n;
}
// 最小公倍数
int lcm(int x, int y)
{
    int num = x * y / gcd(x, y);
    return num;
}
