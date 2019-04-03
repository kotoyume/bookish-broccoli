#include <math.h>
#include <stdio.h>
int main()
{
    char str[11];
    scanf("%s",str);
    int i,sum = 0;
    for(i = 0; i < 11; i++)
    {
        if(str[i] == 0)
            break;
        sum = sum + 1;
    }
    printf("%d",sum);
    return 0;
}