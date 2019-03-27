#include <stdio.h>
#include <math.h>
int main ()
{
    int limit,num;
    int sum = 0;
    scanf ("%d%d",&limit,&num);
    int Islength (int i);
    int Isnumber (int i, int num);
    for (int i = 1; i <= limit; i++)
    {
       sum = sum + Isnumber (i,num);
    }
    printf("%d",sum);
    return 0;
} 
int Islength (int i)
{
    for (int j = 0; ;j++)
    {
        if (i / pow (10,j) < 10)
        {
            return j;
        }
    }
}
int Isnumber (int i, int num)
{
    int number = 0;
    int str[8];
    int len = Islength (i);
    for (int k = 0; k <= len; k++)
    {
        int m = pow(10,k);
        str[k] = (i / m) % 10;
    }
    for (int k = 0;k <= len; k++)
    {
        if (str[k] == num)
        {
            number = number + 1;
        }
    }
    return number;
}



