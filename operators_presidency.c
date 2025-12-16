#include <stdio.h>
int main()
{
    int a = 10;
    int b = 2;
    int c = 6;
    printf("Enter The calculated value: %d\n", a * b / c);
    // a*b/c right to left
    // 10*2/c
    // 20/c
    // 20/6=3 and if float 3.33
    printf("The value of next calcuation is: %d\n", b / c + 7);
    // b/c+7=2/6+7
    // 0+7=7
    printf("The value of next calculation is: %d\n", a + b * c - a / b);
    // a+b*c-a/b=10+2*6-10/2
    // 10+12-5=17
    // operator presidence
    printf("The value of final calculation is: %d\n", 2 * a + b * c - 4 * a / b + b % c);
    // 2*a+b*c-4*a/b+b%c
    // 2*10=20
    // b*c=2*6=12
    // 4*a= 4*10=40
    // 20+12-40/2+2%6
    // b%c=2%6=2
    // 20+12-20+2
    // 32-20+2=14
    return 0;
}