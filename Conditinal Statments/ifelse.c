#include <stdio.h>
int main() {
int age;
printf("Enter your age: ");
scanf("%d", &age);
// Conditional statement to check if age is less than 18 or not
  if(age<18){
      printf("You are a minor.\n");
  }
    else {
        printf("You are an adult.\n");
    }

return 0;
}   