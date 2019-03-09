#include <stdio.h>
#include <math.h>
int main()
{
    double a[12]={
        1.35,
        1.26,
        1.38,
        1.33,
        1.30,
        1.29,
        1.33,
        1.32,
        1.32,
        1.34,
        1.29,
        1.36
    };
    double b = 0;
    int i;
    for(i = 0;i <= 11;i++)
    {
        b = b + (a[i]-1.32)*(a[i]-1.32);
    }
    double s1 = sqrt(b/11);
    double s2 = sqrt(b/132);
    printf("%f\n%f\n%f\n%f\n",s1,s2,b/11,b/132);
    return 0;
}
