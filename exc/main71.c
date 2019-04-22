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
    int i;
    for( i = 0; i < 3; i++)
    {
        scanf("%d%d",&leader[i].num,&leader[i].class);

    }
    
}
int main(int argc, char* argv[])
{
    
    return 0;
}
