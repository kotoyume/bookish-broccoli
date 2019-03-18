#include <stdio.h>
#include <string.h>
int main()
{
    char name[21],nam[21];
    int i,j,n;
    int a,b,e;
    char c,d;
    int maxmoney = 0,summoney = 0;

    scanf("%d\n",&n);
    for(i = 1;i <= n;i ++)
    {
        for(j = 0;j < 20;j++)
        {
            name[j] = 0;
        }
        int money = 0;
        scanf("%s", name);
        // for(j = 0; ; j++)
        // {
        //     if(name[j] == '\n')
        //     {
        //     name[j] = 0;
        //     break;
        //     }
        // }
        scanf("%d%d",&a,&b);
        scanf(" %c %c",&c,&d);
        scanf("%d",&e);
        if(a > 80 && e > 0)
        money = money + 8000;
        if(a > 85 && b > 80)
        money = money + 4000;
        if(a > 90)
        money = money + 2000;
        if(a > 85 && d =='Y')
        money = money + 1000;
        if(b > 80 && c =='Y')
        money = money + 850;
        summoney = summoney + money;
        if(i == 1 || money > maxmoney)
        {
        strcpy(nam , name);
        maxmoney = money;
        }
        
    }
        printf("%s",nam);
        printf("\n");
        printf("%d\n%d\n",maxmoney,summoney);

    return 0;
}
