#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    char grade;
    if(a < 60)
    grade ='E';
    if(a <= 69 && a >=60)
    grade ='D';
    if(a <= 79 && a >=70)
    grade = 'C';
    if(a <= 89 && a >=80)
    grade = 'B';
    if(a < 95 && a >=90)
    grade = 'A';
    if(a >= 95)
    grade = 'O';
    switch(grade)
    {
        case 'E' : printf("E");break;
        case 'D' : printf("D");break;
        case 'C' : printf("C");break;
        case 'B' : printf("B");break;
        case 'A' : printf("A");break;
        case 'O' : printf("A+");break;
    }
    return 0;
}
