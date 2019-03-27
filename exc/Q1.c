#include <stdio.h>
int main()
{
    int m,n,i,num[100];
    int b[100],k = 0,a = 1;
    scanf ("%d%d",&n,&m);
    for (i = 0; i < n; i++)
        scanf("%d",&num[i]);
    int c;
    int IsValued(int b[],int k,int c);
    for (i = 1; ; i++)
    {
        if (a % n == 0)
                c = n;
        else c = a % n;
        if (IsValued(b,k,c))
            {
                a = a + 1;
                i = i - 1;
                continue;
            }
        if (i == m)
        {
            // {
                b[k] = c;
                // printf("[a = %d, i = %d, c = %d]", a, i, c);
                k = k + 1;
            // }
            m = num[c-1];
            i = 0;
            a = c;
        }
        if (k == n)
            break; 
        a = a + 1;
    }
    for (i = 0; i < k; i++)
    {
        if(i == k-1)
            printf("%d",b[i]);
        else
            printf("%d ",b[i]);

    }
    return 0;
}
int IsValued(int b[],int k,int c)
{
    int j;
    for (j = 0; j < k; j++)
    {
        if(c == b[j])
            return 1;
    }
    return 0;
}