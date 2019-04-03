#include <stdio.h>
#include <string.h>
int main ()
{
    // 比较字符串大小
    char str1[6],str2[6];
    scanf("%s",str1);
    scanf("%s",str2);
    if (strcmp(str1,str2) == 0)
        printf("0");
    if (strcmp(str1,str2) > 0)
        printf("1");
    if (strcmp(str1,str2) < 0)
        printf("-1");
    return 0;
}