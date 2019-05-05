#include <stdio.h>
struct number
{
    float real;
    float imag;
};
struct number add(struct number a, struct number b)
{
    struct number c;
    c.real = a.real + b.real;
    c.imag = a.imag + b.imag;
    return c;
}
void show(struct number c)
{
    if(c.imag < 0)
        printf("%g%gj",c.real,c.imag);
    else
        printf("%g+%gj",c.real,c.imag);
    
}
int main(int argc, char* argv[])
{
    struct number a, b, c;
    scanf("%f%f",&a.real,&a.imag);
    scanf("%f%f",&b.real,&b.imag);
    c = add(a,b);
    show(c);
    return 0;
}
