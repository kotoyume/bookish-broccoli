#include <stdio.h>
int main()
{
    int m=0, n=0;
    char a,b,c,d,e;
    scanf("%c,%c,%c,%c,%c",&a,&b,&c,&d,&e);
    if(a >= 65 && a <= 90)
    m = m + 1;
    if(a >= 97 && a <= 122)
    n = n +1;
    if(b >= 65 && b <= 90)
    m = m + 1;
    if(b >= 97 && b <= 122)
    n = n +1;
    if(c >= 65 && c <= 90)
    m = m + 1;
    if(c >= 97 && c <= 122)
    n = n +1;
    if(d >= 65 && d <= 90)
    m = m + 1;
    if(d >= 97 && d <= 122)
    n = n +1;
    if(e >= 65 && e <= 90)
    m = m + 1;
    if(e >= 97 && e <= 122)
    n = n +1;
    printf("大写字母个数=%d\n",m);
    printf("小写字母个数=%d\n",n);
    return 0;
}
