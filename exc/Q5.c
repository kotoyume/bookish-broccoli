#include <stdio.h>
int main ()
{
    int height[10];
    int high;
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&height[i]);
    }
    scanf("%d",&high);
    for (int i = 0;i < 10; i++)
    {
        if ((high + 30) >= height[i])
            sum = sum + 1;
    }
    printf("%d",sum);
    return 0;
}