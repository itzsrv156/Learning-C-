#include <stdio.h>
int main() {
 int marks;
    printf("Enter your marks:");
    scanf("%d", &marks);
     if (marks>=33){
        printf("Congratulations! You have passed the exam.\n");
     }
     else {
        printf("Unfortunately, you have failed the exam. Better luck next time!\n");
     }
return 0;
}