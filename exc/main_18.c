#include <stdio.h>

int main ()
{
    int gcd(int x, int y);
    int lcm(int x, int y);
    int x, y;
    scanf("%d,%d", &x, &y);
    printf("���Լ����%d\n", gcd(x, y));
    printf("��С��������%d\n", lcm(x, y));
    return 0;
}
// ���Լ��
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
// ��С������
int lcm(int x, int y)
{
    int num = x * y / gcd(x, y);
    return num;
}
