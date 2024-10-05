#include <stdio.h>
#include <stdlib.h>
int main (){
    double num1;
    double num2;
    char op;
    printf("enter a first number:");
    scanf("%lf",&num1);
    printf("Enter a Operator:");
    scanf(" %c",&op);
    printf("enter a  second number:");
    scanf("%lf",&num2);


    if (op=='+'){
        printf("%f",num1+num2);
    }else if (op=='-'){
        printf("%f",num1 - num2);
    }else if (op=='*')
    printf("%f",num1 * num2);
        else if (op=='/'){
            printf("%f",num1 /num2);
        } else {
            printf("Invalid Operator");

        }

    return 0;
}
