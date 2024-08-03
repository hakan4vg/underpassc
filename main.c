#include <stdio.h>
#include <stdlib.h>
#include "helloworld.h"
#include "basiccalculator.h"


int main(void)
{
    const char *greeting = helloWorld();
    if (greeting != NULL) {
        printf("%s\n", greeting);
        free((void *)greeting);
    }
    else {
        printf("Memalloc fail\n");
    }

    int a, b;
    char operation;
    while (operation != 'q') {

        printf("Enter an operation (+, -, *, /, %%, ^, ! or q to exit): ");
        scanf(" %c", &operation);

        if (operation == 'q')
            break;

        printf("Enter the first number: ");
        scanf("%d", &a);
        printf("Enter the second number: ");
        scanf("%d", &b);


        switch (operation) {
            case '+':
                printf("%d + %d = %d\n", a, b, add(a, b));
            break;

            case '-':
                printf("%d - %d = %d\n", a, b, subtract(a, b));
            break;

            case '*':
                printf("%d * %d = %d\n", a, b, multiply(a, b));
            break;

            case '/':
                if (b!=0) {
                    printf("%d / %d = %f\n", a, b, divide(a, b));
                }
                else {
                    printf("Error, division by zero\n");
                }

            case '%':
                printf("%d %% %d = %d\n", a, b, modulo(a, b));
            break;

            case '^':
                printf("%d ^ %d = %d\n", a, b, power(a, b));
            break;

            case '!':
                printf("%d! = %d\n", a, factorial(a));
            break;

            default:
                printf("Invalid operation\n");
            break;

        }
    }

    return 0;
}
