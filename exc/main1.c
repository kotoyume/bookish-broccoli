#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c,d,sum;
    scanf("%d",&a);
    b = a % 10;
    c = (a / 10) % 10;
    d = a / 100;
    sum = pow(b,3) + pow(c,3) + pow(d,3);
    if(sum == a)
    printf("%d is a narcissistic number",a);
    else
    printf("%d is not a narcissistic number",a);
    return 0;
}