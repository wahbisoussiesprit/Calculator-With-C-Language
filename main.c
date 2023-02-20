#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    system("color c") ;

    printf("----------------------------------------");
    printf("       Calculator Created By Wahbi      ");
    printf("----------------------------------------");


    printf("\n");

    char operator;
    double num1, num2, result;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch(operator) {
        case '+':
            result = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf", num1, num2, result);
            break;

        case '-':
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf", num1, num2, result);
            break;

        case '*':
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf", num1, num2, result);
            break;

        case '/':
            if (num2 == 0) {
                printf("Error: division by zero");
            } else {
                result = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf", num1, num2, result);
            }
            break;

        default:
            printf("Error: invalid operator");
    }

    return 0;
}
