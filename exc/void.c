#include <Stdio.h>
int main()
{
    void step(int n,char one,char two,char three);
    int n;
    scanf("%d",&m);
    step(m,'A','B','C');
    return 0;
}
void step(int n,char one,char two,char three)
{
    // 将n个盘子借助B座移到C座
    if(n == 1)
    move(one,three);
    else
    {
        step(n - 1,one,three,two);
        move(one,three);
        step(n - 1,)
    }
}
