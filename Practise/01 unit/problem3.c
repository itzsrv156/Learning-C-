#include <stdio.h>
int main() {
float r,h,vol;
printf("Enter the radius and height of the cylinder:");
scanf("%f %f", &r,&h);
vol=3.14 * r * r * h;
printf("The volume of the cyclinder is: %.2f\n", vol);
return 0;
}