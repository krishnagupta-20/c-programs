#include <stdio.h>

int main() { 
    float a, b;
    char op;

    printf("Enter First number:\t");
    scanf("%f", &a);
    printf("Enter Second number:\t");
    scanf("%f", &b);
    printf("Enter operator (+, -, *, /, %%):\t");
    scanf(" %c", &op);

    switch (op) {
        case '+':
            printf("Sum of %f and %f is %f", a, b, a + b);
            break;
        case '-':
            printf("Difference of %f and %f is %f", a, b, a - b);
            break;
        case '*':
            printf("Product of %f and %f is %f", a, b, a * b);
            break;
        case '/':
            if (b != 0)
                printf("Quotient of %f and %f is %f", a, b, a / b);
            else
                printf("Error: Division by zero is not allowed.");
            break;
        case '%':
            if (b != 0)
                printf("Remainder of %d and %d is %d", (int)a, (int)b, ((int)a % (int)b));
            else
                printf("Error: Modulus by zero is not allowed.");
            break;
        default:
            printf("Invalid operator choice.");
    }

    return 0;
}