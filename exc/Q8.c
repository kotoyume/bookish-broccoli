#include <stdio.h>
int main ()
{
    int n,str[100];
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&str[i]);
    }
    int sum;
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = 0;j < i; j++)
        {
            if (str[i] > str[j])
                sum = sum + 1;
        }
        if(i == n - 1)
            printf("%d",sum);
        else
            printf("%d ",sum);
    }
}