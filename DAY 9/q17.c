Write a program to find the roots of a quadratic equation and categorize them.


#include <stdio.h>
int main() {
    double quadratic equation, root, root1, root2, a, b, c;
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    double discriminant = b * b - 4 * a * c;
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and different.\n");
        printf("Root 1: %.2f\nRoot 2: %.2f\n", root1, root2);
    } else if (discriminant == 0) {
        root = -b / (2 * a);
        printf("Roots are real and the same.\n");
        printf("Root: %.2f\n", root);
    } else {
        double realPart = -b / (2 * a);
        double imagPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and different.\n");
        printf("Root 1: %.2f + %.2fi\n", realPart, imagPart);
        printf("Root 2: %.2f - %.2fi\n", realPart, imagPart);
    }
    return 0;
}
        
