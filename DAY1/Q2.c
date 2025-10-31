// Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>

int main() {
    float a,b, sum, diff, pro, quo;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    sum = a + b;
    diff = a - b;
    pro = a * b;
    if (b != 0)
        quo = a / b;
    else {
        printf("error.\n");
        return 0;
    }
    printf("Sum = %.2f\n", sum);
    printf("diff = %.2f\n", diff);
    printf("pro = %.2f\n", pro);
    printf("quo = %.2f\n", quo);
    return 0;
}
