#include<stdio.h>
int main() {
    int area,lenght,width;
    printf("Enter the Lenght of rectangle: ");
    scanf("%d", &lenght);
    printf("Enter the Width of rectangle: ");
    scanf("%d", &width);
    area = lenght * width;
    printf("Area of rectangle is: %d", area);
    return 0;
}