#include <stdio.h>
int main() {
float r;
float pi=3.14;
float area;
printf("Enter the radius of the circle:");
scanf("%f", &r);
area = pi * r * r;
printf("The area of the circle is: %f\n", area);
return 0;
}