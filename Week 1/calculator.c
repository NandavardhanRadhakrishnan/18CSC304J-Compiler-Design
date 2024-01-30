#include <stdio.h>

int main(){
    char choice;
    float num1, num2;
    printf("enter (+,-,*,/):");
    scanf(" %c",&choice);

    printf("enter two numbers:");
    scanf("%f %f",&num1,&num2);

    if (choice == '+'){
        printf("addition:%f",(num1+num2));
    }
    if (choice == '-'){
        printf("subtraction:%f",(num1-num2));
    }
    if (choice == '*'){
        printf("multiplication:%f",(num1*num2));
    }
    if (choice == '/'){
        printf("division:%f",(num1/num2));
    }
}
