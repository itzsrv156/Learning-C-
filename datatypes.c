#include<stdio.h>
int main() {
     int a = 10;
     float b = 5.5;
     char c = 'A';
     double d = 20.99;
    

     int x;
     x=20;
     //both works the same 
        printf("Integer: %d\n", a);
        printf("Float: %.2f\n", b);
        printf("Character: %c\n", c);
        printf("Double: %.2lf\n", d);
        printf("Value of x: %d\n", x);
        return 0;
    
}