Write a program to check if a number is an Armstrong number.

    
#include <stdio.h>
int main() {
    int digit, n, power, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    int original = n;
    while (n != 0) {
        digit = n % 10;
        power = 1;
        for (int i = 0; i < 3; i++) {
            power *= digit;
        }
        sum += power;
        n /= 10;
    }
    if (original == sum) {
        printf("%d is an Armstrong number.\n", original);
    } else {
        printf("%d is not an Armstrong number.\n", original);
    }
    return 0;
}
