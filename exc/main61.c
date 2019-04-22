#include <stdio.h>

int main(int argc, char* argv[])
{
    int p[5], i;
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &p[i]);
    }
    void fun(int *p, int n);
    fun(p, 5);
    printf("%d,%d,%d,%d,%d",p[0],p[1],p[2],p[3],p[4]);
    return 0;
}
void fun(int *p, int n)
{
    int i, j, m;
    for( i = 0; i < n; i++)
    {
        for( j = i + 1; j < n; j++)
        {
            if (*(p + j) > *(p + i)) {
                m = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = m;
            }
            
        }
        
    }
    
}