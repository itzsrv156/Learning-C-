#include <stdio.h>
int main() {
 int i = 10;
 int j = i;
 int a = 2, b = 4, c = 6;
 int j1 = a+b+j-c;
 printf("The value of i is: %d\n and the value of j is: %d\n", i, j);
 printf("The value of a is: %d\n the v alue of b is: %d\n and the value of c is: %d\n", a, b, c);
 printf("The value of j1 is: %d\n", j1);
 return 0;
}