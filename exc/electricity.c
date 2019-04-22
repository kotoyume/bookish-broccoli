#include <stdio.h>

int main(int argc, char* argv[])
{
    freopen("data.in", "r", stdin);
    double u[10], ia[10];
    int i;
    for(i = 0; i < 10; i++)
    {
        scanf("%lf%lf",&u[i],&ia[i]);
    }
    double r,p;
    for( i = 0; i < 10; i++)
    {
        r = u[i] / (ia[i] - 0.22);
        p = u[i] * (ia[i] - 0.22);
        printf("%f %f\n", r, p);

    }
    
    return 0;
}
