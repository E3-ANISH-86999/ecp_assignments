#include <stdio.h>

float calculator(float a, float b, char operator);

int error_flag = 0;

int main() {
    float num1, num2, result;
    char op;
    printf("Enter two numbers and an operator (+, -, *, /): ");
    scanf("%f %f %c", &num1, &num2, &op);
    
    result = calculator(num1, num2, op);
    
    if (error_flag) {
        printf("Error: Invalid operation.\n");
    } else {
        printf("Result: %.2f\n", result);
    }

    return 0;
}

float calculator(float a, float b, char operator) {
    float result;
    switch (operator) {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            if (b == 0) {
                error_flag = 1; 
                result = 0; 
            } else {
                result = a / b;
            }
            break;
        default:
            error_flag = 1;
            result = 0;
    }
    return result;
}

