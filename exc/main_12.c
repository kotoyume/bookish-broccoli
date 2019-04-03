#include <stdio.h>
int main()
{
    int i, j;
    int message[4][2] = {
        {1001 , 11},
        {1002 , 22},
        {1003 , 11}
    };
    char name[4][6] = {
        {"zhang"},
        {"li"},
        {"wang"}
    };
    double grade[4][4] = {
        {99.5 , 88.5 , 89.5 , 277.5},
        {77.9 , 56.5 , 87.5 , 221.9},
        {92.5 , 99.0 , 60.5 , 252.0}
    };
    scanf("%d%d",&message[3][0],&message[3][1]);
    scanf("%s",name[3]);
    for (i = 0; i < 3; i++)
    {
        scanf("%lf",&grade[3][i]);
    }
    grade[3][3] = grade[3][0] + grade[3][1] + grade[3][2];
    int num[4] = {0 , 1 , 2 , 3};
    int m;
    for (i = 0; i < 3; i++)
    {
        for(j = i + 1; j < 4; j++)
        {
            if(grade[i][3] < grade[j][3])
            {
                m = num[j];
                num[j] = num[i];
                num[i] = m;
            }
        }
    }
    for(i = 0; i < 4; i++)
    {
        printf("%d,%d,%s,%.1f,%.1f,%.1f,%.1f\n",
        message[num[i]][0],message[num[i]][1],name[num[i]],grade[num[i]][0],grade[num[i]][1],grade[num[i]][2],grade[num[i]][3]);

    }
    return 0;
}