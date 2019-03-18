#include <stdio.h>
int main()
{
    int i,j,m;
    double a,b,c,t;
    int num[5];
    double grade[5];
    for(i = 0; i < 5; i ++)
    {
        scanf("%d",&num[i]);
        scanf("%lf%lf%lf",&a,&b,&c);
        grade[i] = a + b + c;
    }
    for(i = 0; i < 5; i ++)
    {
        for(j = i + 1; j < 5; j ++)
        {
            if(grade[j] > grade[i])
            {
                t = grade[i];
                grade[i] = grade[j];
                grade[j] = t;
                m = num[i];
                num[i] = num[j];
                num[j] = m;
            }
        }
    }
    for(i = 0;i < 5;i ++)
    {
        printf("%d,%.1f\n",num[i],grade[i]);
    }
    return 0;
}
