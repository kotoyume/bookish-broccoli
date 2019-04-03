#include <stdio.h>
int main ()
{
    // 对一个已排序字符串插入一个数组
    char ch[20] = "bcfmr";
    char a;
    int i,sum = 0;
    scanf("%c",&a);
    for(i = 0; i < 5; i++)
    {
        if (a < ch[i] && sum == 0)
        {
            printf("%c",a);
            sum = 1;
        }
        printf("%c",ch[i]);
        if (i == 4 && a > ch[i])
            printf("%c",a);
    }
    return 0;
}