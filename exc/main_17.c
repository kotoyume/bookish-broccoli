#include <stdio.h>
int num[3] = {0, 1, 2};

int main ()
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
        {99.5 , 88.5 , 89.5 },
        {77.9 , 56.5 , 87.5 },
        {92.5 , 99.0 , 60.5 }
    };
    for( i = 0; i < 3; i++)
    {
        grade[i][3] = grade[i][0] + grade[i][1] + grade[i][2];
    }
    double ms (double grade[3][4]);
    ms (grade);
    for(i = 0; i < 3; i++)
    {
        printf("%d,%d,%s,%.1f,%.1f,%.1f,%.1f\n",
        message[num[i]][0],message[num[i]][1],name[num[i]],grade[num[i]][0],grade[num[i]][1],grade[num[i]][2],grade[num[i]][3]);

    }
    return 0;
}
double ms (double grade[3][4])
{
    int i,j,m;
    for (i = 0; i < 2; i++)
    {
        for(j = i + 1; j < 3; j++)
        {
            if(grade[i][3] < grade[j][3])
            {
                m = num[j];
                num[j] = num[i];
                num[i] = m;
            }
        }
    }
}