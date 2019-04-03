#include <stdio.h>
int main ()
{
    int position[10000];
    int area[200];
    int number,length;
    scanf("%d%d",&number,&length);
    for (int i = 0; i <= number; i++)
    {
        position[i] = 1;
    }

    for (int i = 0; i < 2 * length; i++)
    {
        scanf("%d",&area[i]);
    }

    int sum = 0;
    for (int i = 0; i < 2 * length; i = i + 2)
    {
        for (int j = area[i]; j <= area[i + 1]; j++)
        {
            sum = sum + position[j];
            position[j] = 0;
        }
    }
    printf("%d",number + 1 - sum);
    return 0;
}