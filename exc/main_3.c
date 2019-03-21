#include <stdio.h>
int main()
{
    // 输出下三角*
    int a,i,j;
    scanf("%d",&a);
    for(i = 1;i <= a;i++)
    {
        for(j = 1;j <= i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
