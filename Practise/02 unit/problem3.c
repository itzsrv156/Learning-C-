#include <stdio.h>
int main()
{
    int a = 97;
    int b;
    printf("Enter the value of b");
    scanf("%d", &b);
    int div;
    div = b%a;
    printf("The value of a %% b is: %d\n", div);
    return 0;
}