#include <stdio.h>
int max,min;

int main ()
{
    int p[5],i;
    for( i = 0; i < 5; i++)
    {
        scanf ("%d",&p[i]);
    }
    int max_min (int p[5]);
    max_min (p);
    printf("max=%d\n",max);
    printf("min=%d\n",min);
    return 0;
}

int max_min (int p[5])
{
    max = p[0];
    min = p[0];
    int i;
    for (i = 0; i < 5; i++)
    {
        if (p[i] > max) {
            max = p[i];
        }
        if (p[i] < min) {
            min = p[i];
        }
    }
}