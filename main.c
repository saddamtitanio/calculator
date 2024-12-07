#include <stdio.h>

void operation(int input, int x, int y) {
    switch (input) {
        /* Addition */
        case 1:
            break;
        
        /* Subtraction */
        case 2:
            break;
        
        /* Multiplication */
        case 3:
            break;

        /* Division */
        case 4:
            break;

        /* Exponents */
        case 5:
            break;
        
        /* Clear */
        case 7:
            break;
        
        default:
            break;
    }
}

int main() {
    int input;
    int x, y;

    printf("==== SIMPLE CALCULATOR ====\n");
    do {
        printf("1. Addition (+)\t\t2. Subtraction (-)\n");
        printf("3. Multiplication (*)\t4. Division (/)\n");
        printf("5. Exponent (^)\t\t6. Clear\n");
        printf("7. Exit\n");
        
        printf("Option (1 - 6): ");

        /* Input validation */
        if (scanf("%1d", &input) && input >= 1 && input <= 7) {
            printf("Enter the first number: ");
            scanf("%d", &x);

            printf("Enter the second number: ");
            scanf("%d", &y);
            operation(input, x, y);
        }
        else {
            printf("Invalid option.\n");
            while (getchar() != '\n');
        }
        printf("\n");

    } while (input != 7);

    return 0;
}