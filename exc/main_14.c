#include <stdio.h>
int maxProfit (int money[])
{
    int i, max = 0;
    for( i = 1; i < 5; i++)
    {
        if(money[i - 1] < money[i])
            max = max + money[i] - money[i - 1];
    }
    return max;
}
int main ()
{
    int maxProfit (int money[]);
    int money[5];
    scanf("%d,%d,%d,%d,%d",&money[0],&money[1],&money[2],&money[3],&money[4]);
    int max = maxProfit (money);
    printf("%d",max);
    return 0;

}