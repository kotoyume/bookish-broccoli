#include <stdio.h>

int main(int argc, char* argv[])
{
    void copystr(char str1[20], char str2[20], int m);
    char str1[20], str2[20];
    int m;
    gets(str1);
    scanf("%d", &m);
    copystr(str1, str2, m);
    printf("%s", str2);
    return 0;
}

void copystr(char str1[20], char str2[20], int m)
{
    int i;
    for (i = 0; i <= m; i++)
    {
        if (i == m) {
            str2[i] = 0;
        }
        else
            str2[i] = str1[i];
    }   
}