Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

    
#include <stdio.h>
int main() {
    int n1, n2;
    char operator;
    printf("Enter 2 numbers and an operator: ");
    scanf("%d %d %c", &n1, &n2, &operator);
    switch (operator) {
    case '+':
        printf("Sum: %d\n", n1 + n2);
        break;
    case '-':
        printf("Difference: %d\n", n1 - n2);
        break;
    case '*':
        printf("Product: %d\n", n1 * n2);
        break;
    case '/':
        if (n2 != 0) {
            printf("Quotient: %d\n", n1 / n2);
        } else {
            printf("Error: Division by zero\n");
        }
        break;
    case '%':
        if (n2 != 0) {
            printf("Remainder: %d\n", n1 % n2);
        } else {
            printf("Error: Division by zero\n");
        }
        break;
    default:
        printf("Invalid operator\n");
    }
    return 0;
}
