#include <stdio.h>
int main() {
    int digit, sum = 0, count = 0;
    long n;
    printf("Enter a number: ");
    scanf("%ld", &n);
    long original = n;
    while (n != 0) {
        digit = n % 10;
        sum += digit;
        n /= 10;
        count++;
    }
    printf("Sum of digits: %d\n", sum);
    return 0;
}
