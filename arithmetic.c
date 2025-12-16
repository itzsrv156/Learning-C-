#include <stdio.h>
int main()
{
    int a, b;
    a = 5;
    b = 10;
    int z;
    z = a + b;
    int c, d;
    c = 15;
    d = 20;
    int z1;
    z1 = c * d;
    int e, f;
    e = 50;
    f = 25;
    int z2;
    z2 = e / f;
    int g, h;
    g = 17;
    h = 9;
    int z3;
    z3 = g - h;
    int m, n;
    m = 7;
    n = 3;
    int z4;
    z4 = m % n;
    int p, q;
    p = 4;
    q = 6;
    int z5;
    z5 = p + q * a - b / n;
    printf("The value of z = a + b is: %d\n", z);
    printf("The value of z1 = c * d is: %d\n", z1);
    printf("The value of z2 = e / f is: %d\n", z2);
    printf("The value of z3 = g - h is: %d\n", z3);
    printf("The value of z4 = m %% n is: %d\n", z4);
    printf("The value of z5 = p + q * a - b / n is: %d\n", z5);
    return 0;
}