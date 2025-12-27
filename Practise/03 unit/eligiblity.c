#include <stdio.h>
int main() {
 int age,grade;
 printf("Enter your age: ");
    scanf("%d", &age);
 printf("Enter the grade you scored: ");
    scanf("%d", &grade);

    if (age>=18 && grade>=60){
    printf("You are eligible");
    }
    else{ 
    printf("You are not eligible");
}
return 0;
}