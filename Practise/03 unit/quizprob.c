#include <stdio.h>
int main() {
 int a;
  printf("Enter the percentage scored by you:");
    scanf("%d", &a);
     if (a>=90 && a<=100){
        printf("Your grade is A+\n");
     }
        else if (a>80 && a<90){
            printf("Your grade is A\n");
        }
        else if (a>70 && a<=80){
            printf("Your grade is B+\n");
        }
        else if (a>60 && a<=70){
            printf("Your grade is B\n");
        }
        else if (a>50 && a<=60){
            printf("Your grade is C\n");
        }
        else if (a>40 && a<=50){
            printf("Your grade is D\n");
        }
        else if (a>=0 && a<=40){
            printf("You have failed the exam\n");
        }
        else {
            printf("Invalid percentage entered!\n");
        }

return 0;
}