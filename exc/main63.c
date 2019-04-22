#include <stdio.h>

int main(int argc, char* argv[])
{
    char str1[21], str2[21];
    int strcmp(char *p1, char *p2);
    scanf("%s", str1);
    scanf("%s", str2);
    printf("%d",strcmp(str1, str2));
    return 0;
}
int strcmp(char *p1, char *p2)
{
    int i;
    for ( i = 0; i < 21; i++)
    {
        if (*(p1 + i) > *(p2 + i)) {
            return 1;
        }
        if (*(p1 + i) < *(p2 + i)) {
            return -1;
        }
        if (*(p1 + i) == 0 ||*(p2 + i) == 0 ) {
            break;
        }
        
    }
    return 0;
}