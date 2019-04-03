#include <stdio.h>
#include <string.h>
int main()
{
    int i, j;
    int message[3][2] = {
        {1001 , 11},
        {1002 , 22},
        {1003 , 11}
    };
    char name[3][6] = {
        {"zhang"},
        {"li"},
        {"wang"}
    };
    double grade[3][4] = {
        {99.5 , 88.5 , 89.5 , 277.5},
        {77.9 , 56.5 , 87.5 , 221.9},
        {92.5 , 99.0 , 60.5 , 252.0}
    };
    char ch[6];
    int m = 4;
    scanf("%s",ch);
    for (i = 0; i < 3; i++)
    {
        if (strcmp(ch,name[i]) == 0)
        {
            m = i;
            break;
        }
    }
    int num[3] = {0 , 1 , 2 };
    int n;
    char name1[6],name2[6];
    for (i = 0; i < 3; i++)
    {
        for(j = i + 1; j < 3; j++)
        {
            if(strcmp(name[num[i]],name[num[j]]) > 0)
            {
                n = num[j];
                num[j] = num[i];
                num[i] = n;
            }
            
        }
    }
    for (i = 0; i < 3; i++)
    {
        if (num[i] != m)
            printf("%d,%d,%s,%.1f,%.1f,%.1f,%.1f\n",message[num[i]][0],message[num[i]][1],name[num[i]],grade[num[i]][0],grade[num[i]][1],grade[num[i]][2],grade[num[i]][3]);

    }
    return 0;
}