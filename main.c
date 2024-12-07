#include <stdio.h>
#include <math.h>

void add(float x, float y, double *result); 
void subtract(float x, float y, double *result);
void multiply(float x, float y, double *result);
void division(float x, float y,double *result);
void exponent(float x, float y,double *result);
void clear(double *result);
void operation(int input, float x, float y, double *result);

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
                scanf("%f", &x);
                isCalculated = 1;
            }

            printf("Y: ");
            scanf("%f", &y);
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

void operation(int input, float x, float y, double *result) {
    switch (input) {
        /* Addition */
        case 1:
            add(x, y, result);
            break;
        
        /* Subtraction */
        case 2:
            subtract(x, y, result);
            break;
        
        /* Multiplication */
        case 3:
            multiply(x, y, result);
            break;

        /* Division */
        case 4:
            division(x,y, result);
            break;

        /* Exponents */
        case 5:
            exponent(x,y, result);
            break;
        
        /* Clear */
        case 7:
            clear(result);
            break;
        
        default:
            break;
    }
}

void add(float x, float y, double *result) {
    *result = x + y;
}

void subtract(float x, float y, double *result) {
    *result = x - y;
}

void multiply(float x, float y, double *result) {
    *result = x * y;
}

void division(float x, float y,double *result){
    if (y == 0) {
        printf("Cannot divide by 0\n");
    }
    else{
        *result = x / y;
    }
}

void exponent(float x, float y,double *result){
    *result = pow(x,y);
}

void clear(double *result) {
    *result = 0;
}