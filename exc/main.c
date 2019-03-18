#include <stdio.h>
int main()
{
    int i;
    char str[6];
    str[5] = 0;
    scanf("%s",str);
    for(i = 0 ; i < 5 ; i ++)
    {
        if(str[i] >= 65 && str[i] <= 90)
        {
            if(str[i] > 85)
            str[i] = str[i] - 21;
            else
            str[i] = str[i] + 5;
        }
        if(str[i] >= 97 && str[i] <= 122)
        {
            if(str[i] > 117)
            str[i] = str[i] - 21;
            else
            str[i] = str[i] + 5;
        }
    }
    printf("%s",str);
    return 0;
}
