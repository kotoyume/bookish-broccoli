#include <stdio.h>
struct Student
{
    int num;
    int class;
    char name[20];
    double grade[4];
} leader[3];
void scan()
{
    int i, j;;
    for( i = 0; i < 3; i++)
    {
        scanf("%d%d",&leader[i].num,&leader[i].class);
        scanf("%s",leader[i].name);
        for( j = 0; j < 4; j++)
        {
            scanf("%lf",&leader[i].grade[j]);
        }  
    } 
}
void rank()
{
    int i, j;
    struct Student temp;
    for (i = 0; i < 3; i++)
    {
        for( j = i + 1; j < 3; j++)
        {
            if (leader[i].grade[3]> leader[j].grade[3]) {
                temp  = leader[i];
                leader[i] = leader[j];
                leader[j] = temp;
            }   
        }
    }
    
}
int main(int argc, char* argv[])
{
    scan();
    int i;
    rank();
    for( i = 0; i < 3; i++)
    {
        printf("%d,%d,%s,",leader[i].num,leader[i].class,leader[i].name);
        printf("%.1f,%.1f,%.1f,%.1f\n",leader[i].grade[0],leader[i].grade[1],leader[i].grade[2],leader[i].grade[3]);
    }
    
    return 0;
}
