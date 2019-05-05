#include <stdio.h>
#include <math.h>
struct point
{
    float x;
    float y;
};

int main(int argc, char* argv[])
{
    struct point num[2];
    scanf("%f%f%f%f",&num[0].x,&num[0].y,&num[1].x,&num[1].y);
    float distance(struct point num[]);
    // printf("%f",distance(num));
    float m = distance(num);
    printf("%f",m);
    return 0;
}
float distance(struct point num[])
{
   float dis;
   dis = sqrt((num[0].x - num[1].x) * (num[0].x - num[1].x) + (num[0].y - num[1].y) * (num[0].y - num[1].y));
   return dis;
}