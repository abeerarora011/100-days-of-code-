#include <stdio.h>

int main() {
    float num1, num2, sum, diff, product, quotient;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    sum = num1 + num2;
    diff = num1 - num2;
    product = num1 * num2;
    quotient = num1 / num2;

    printf("\nSum = %.2f", sum);
    printf("\nDifference = %.2f", diff);
    printf("\nProduct = %.2f", product);
    printf("\nQuotient = %.2f\n", quotient);

    return 0;
}

