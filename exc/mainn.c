#include <stdio.h>
int main()
{
    int n,i,j,sum=1;
    scanf("%d",&n);
    if(n <= 8 && n > 0)
    {
        int a[n][n];
        for(i = 0; ;i++)
        {
            for(j = i; j <= n-1-i;j++)
            {
                a[j][n-1-i] = sum;
                sum = sum + 1;
            }
            for(j = n-2-i;j >= i;j--)
            {
                a[n-1-i][j] = sum;
                sum = sum + 1;
            }
            for(j = n-2-i;j >= i;j--)
            {
                a[j][i] = sum;
                sum = sum + 1;
            }
            for(j = i + 1;j < n-1-i;j++)
            {
                a[i][j] = sum;
                sum = sum + 1;
            }
            if(n == 2*i + 1 || n == 2*i+2)
            break;
        }
        for(i = 0;i < n;i++)
        {
            for(j = 0;j < n;j++)
            {
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }

    }
    else
        printf("empty\n");

    return 0;
}
