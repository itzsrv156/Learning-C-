#include <stdio.h>
int main() {
float p,t,r,si;
printf("Emther the principal amt, time and rate:");
scanf("%f %f %f", &p,&t,&r);
    si=(p*t*r)/100;\
    printf("The simple interest  is: %.2f\n", si);
return 0;
}