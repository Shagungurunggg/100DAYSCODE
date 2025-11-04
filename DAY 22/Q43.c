#include <stdio.h>
int main() {
    int n, strong_sum = 0, original, digit, digits = 0;
    int i, fact;
    printf("Enter a number: ");
    scanf("%d", &n);
    original = n;
    while (n > 0) {
        digit = n % 10;
        fact = 1;
        for (i = 1; i <= digit; i++) {
            fact *= i;
        }
        strong_sum += fact;
        n /= 10;
    }
    if (strong_sum == original) {
        printf("%d is a strong number.\n", original);
    } else {
        printf("%d is not a strong number.\n", original);
    }
    return 0;
}
