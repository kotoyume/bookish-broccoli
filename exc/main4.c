#include <stdio.h>
int main()
{
    int i,j,sum,result = 0;
    for(i = 1;i < 11;i++)
    {
        for(sum = 1,j = i ; ;)
        {
            sum = sum * j;
            j = j - 1;
            if(j < 1)
            break;
        }
        result = result + sum;
    }
    printf("1!+2!+3!+...+10!=%d",result);
    return 0;
}
