//Write a C program that takes a person’s age as input and prints:
//"Child" if age is less than 13
//"Teen" if age is 13 to 19
//"Adult" if age is 20 to 59
//"Senior" if age is 60 or above

#include <stdio.h>
int main() {
 int age;
   printf("Enter your age mate:");
   scanf("%d", &age);
   if (age<13)
{ 
    printf("You are a child");
 }
     else if (age>=13 && age<=19)
 {
     printf("You are a Teen");
 } 
    else if (age>=20 && age<=59)
    {
        printf("You are an Adult");
    }
    else 
    {
        printf("You are a Senior");
    }
return 0;
}