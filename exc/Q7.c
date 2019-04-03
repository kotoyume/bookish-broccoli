// #include <stdio.h>
// int main ()
// {
    // int str[100];
    // int sum;
    // for (int i = 0; ; i++)
    // {
        // scanf("%d",&str[i]);
        // if(str[i] == 0)
        // {
            // sum = i - 1;
            // break;
        // }
    // }
    // for (int i = sum; i >= 0;i--)
    // {
        // if(i == 0)
            // printf("%d",str[i]);
        // else
            // printf("%d ",str[i]);
    // }
    // return 0;
// }
#include <stdio.h>
int main ()
{
    int n,i;
    scanf("%d",&n);
    int str[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d",&str[i]);
    }
    int sum = 1,max = 1;
    for (i = 0; i < n - 1; i++)
    {
        if (str[i + 1]  > str[i])
            sum = sum + 1;
        else
        {
            if (sum > max)
                max = sum;
            sum = 1;
        }
    }
    printf("%d",max);
    return 0;
}