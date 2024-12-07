#include <stdio.h>
#include <math.h>
#include "function.h"


int main() {
    int input;
    int isCalculated = 0;
    float x, y;
    double result;

    printf("==== SIMPLE CALCULATOR ====\n");
    do {
        printf("1. Addition (+)\t\t2. Subtraction (-)\n");
        printf("3. Multiplication (*)\t4. Division (/)\n");
        printf("5. Exponent (^)\t\t6. Clear\n");
        printf("7. Exit\n");
        
        printf("Option (1 - 6): ");

        /* Input validation */
        if (scanf("%1d", &input) && input >= 1 && input <= 7) {
            if (isCalculated) {
                x = result;
                printf("X: %.2lf\n", result);
            }
            else {
                printf("X: ");
                if (scanf("%f", &x)) {
                    isCalculated = 1;
                }
                else {
                    printf("Please enter an integer.\n\n");
                    while (getchar() != '\n');
                    continue;
                }
            }

            printf("Y: ");
            if (!scanf("%f", &y)) {
                printf("Please enter an integer.\n\n");
                while (getchar() != '\n');
                isCalculated = 0;
                continue;
            }
            operation(input, x, y, &result);
            printf("Result: %.2lf\n", result);
        }
        else {
            printf("Invalid option.\n");
            while (getchar() != '\n');
        }
        printf("\n");

    } while (input != 7);

    return 0;
}

