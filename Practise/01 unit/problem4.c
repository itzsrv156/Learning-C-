#include <stdio.h>
int main() {
float c,f;
printf("Ezter the temperature in Celsius:");
scanf("%f", &c);
f= (c*9/5)+32;
printf("The temprature in fahrenheit is: %.2f\n", f);
return 0;
}