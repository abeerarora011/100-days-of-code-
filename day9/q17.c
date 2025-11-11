// Q17: Write a program to find the roots of a quadratic equation and categorize them
#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c, d, root1, root2;
    printf("Enter coefficients a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    d = b*b - 4*a*c;

    if(d > 0) {
        root1 = (-b + sqrt(d)) / (2*a);
        root2 = (-b - sqrt(d)) / (2*a);
        printf("Real and distinct roots: %.2f, %.2f\n", root1, root2);
    }
    else if(d == 0) {
        root1 = root2 = -b / (2*a);
        printf("Real and equal roots: %.2f, %.2f\n", root1, root2);
    }
    else
        printf("Complex roots\n");
    return 0;
}

