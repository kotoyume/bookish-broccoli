#include <stdio.h>
int main ()
{
    int x,i;
    long int n,sum = 0;
    scanf("%d%ld",&x,&n);
    for (i = x; i < n + x; i++)
    {
        if (i % 7 == 0 || i % 7 == 6)
            sum = sum + 0;
        else
            sum = sum + 250;
    }
    printf("%d",sum);
    return 0;
        // int i,j;
        // char a[10];
        // gets(a);
        // for(i=0;i<10;i++)
            // if(a[i]>='A'&&a[i]<='Z')
                // printf("%c",a[i]);[]
}