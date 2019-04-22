#include <stdio.h>

int main(int argc, char* argv[])
{
    char str[21];
    gets(str);
    int slen(char *s);
    printf("%d",slen(str));
    return 0;
}
int slen(char *s)
{
    int i;
    for( i = 0; *(s + i) != 0; i++)
    {}
    return i;
}
