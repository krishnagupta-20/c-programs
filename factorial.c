#include <stdio.h>

int main() {
    int num, i;
    unsigned long factorial = 1;  // Using unsigned long  to handle large numbers

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        for (i = 1; i <= num; i++) {
            factorial *= (unsigned long)i;
        }
        printf("Factorial of %d = %lu\n", num, (unsigned long)factorial);
    }

    return 0;
}