#include <stdio.h>
int main()
{
    int i;
    char a[11];
    scanf("%s",a);
    for(i = 0;i < 11;i++)
    {
        if(a[i] > 64 && a[i] < 91)
        printf("%c",a[i]);
    }
    return 0;
}