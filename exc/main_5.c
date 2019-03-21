#include <stdio.h>
int main()
{
    // 输出杨辉三角
    int a[20][20];
    int i,j,m;
    scanf("%d",&m);
    for(i = 1;i <= m;i ++)
    {
        for(j = 1;j <= i;j ++)
        {
            if(j == 1 || j == i)
            a[i][j] = 1;
            else
            a[i][j] = a[i-1][j-1] + a[i-1][j];
            printf("%d",a[i][j]);
            if(j < i)
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
