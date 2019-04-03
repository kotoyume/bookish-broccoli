#include <stdio.h>
int main ()
{
    int str[100],n,a[100];
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&str[i]);
    }
    int IsValued(int k,int a[],int sum);
    int sum = 0;
    for (int i = 0 ; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                if (k == i || k == j)
                    continue;
                if (str[k] == str[i] + str[j])
                    {
                        if (IsValued(k,a,sum))
                            continue;
                        a[sum] = k;
                        sum = sum + 1;
                    }
            }
        }
    }
    printf("%d",sum);
    return 0;
}
int IsValued(int k,int a[],int sum)
{
    for (int m = 0; m < sum; m++)
    {
        if (k == a[m])
            return 1;       
    }
    return 0;
}