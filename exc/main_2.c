#include <stdio.h>
int main()
{
    int i,j,c;
    int a[35];
    for(i = 2;i < 1001;i++)
    {
        int m = 0,n = 0;
        for(j = 1;j < i;j++)
        {
            if(i % j == 0)
            {
               a[m] = j;
               m = m + 1;
            }
        }
        for(c = 0;c < m;c++)
        {
            n = n + a[c];
        }
        if(n == i)
        printf("%d ",i);
    }
    return 0;
}
