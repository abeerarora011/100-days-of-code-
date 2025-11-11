// Q10: Write a program to calculate simple and compound interest for given principal, rate, and time
#include <stdio.h>
#include <math.h>
int main() {
    float principal, rate, time, simple, compound;
    printf("Enter principal, rate (%% per year), and time (years): ");
    scanf("%f %f %f", &principal, &rate, &time);

    simple = (principal * rate * time) / 100;
    compound = principal * pow((1 + rate/100), time) - principal;

    printf("Simple Interest = %.2f\n", simple);
    printf("Compound Interest = %.2f\n", compound);
    return 0;
}

