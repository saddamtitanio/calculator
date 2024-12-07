#include <stdio.h>
#include <math.h>

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
        case 6:
            clear(result);
            break;
        default:
            break;
    }
}
