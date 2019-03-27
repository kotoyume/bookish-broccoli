// #include <stdio.h>
// int main()
// {
    // int k;
    // double IsResult(int k);
    // scanf ("%d",&k);
    // int m = IsResult(k);
    // printf("%d",m);
    // return 0;
// }
// double IsResult(int k)
// {
    // double sum = 0,i;
    // for (i = 1; ; i++)
    // {
        // sum = sum + (1 / i);
        // if (sum > k)
        // {
            // return i;
        // }
    // }
// }
#include <stdio.h>
int main()
{
    double a;
    scanf("%lf",&a);
    double sum = 0,b = 2;
    for(int i = 1; ; i++)
    {
        sum = sum + b;
        b = b * 0.98;
        if(sum > a)
        {
            printf("%d",i);
            break;
        } 
    }
    return 0;
}