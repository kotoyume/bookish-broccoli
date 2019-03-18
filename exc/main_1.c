#include <stdio.h>
#include <math.h>
int main()
{
    int i,j,n,v=0,m=0;
    for(i = 2;i < 101;i++)
    {
        int c = sqrt(i);
        for(j = 2;j <= c;j++)
        {
            n = i % j;
            if(n == 0)
            break;
        }
        if(j == c+1)
        {
            printf("%d",i);
            m = m + 1;
        }
        if(v != m && m !=0 && m !=5)
        {
        printf(" ");
        v = m;
        }
        if(m == 5)
        {
        printf("\n");
        m = 0;
        }
    }
    return 0;
}
