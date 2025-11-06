Write a program to find the product of odd digits of a number.

#include <stdio.h>
int main()
{
    int n, digit, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n != 0 && n % 2 != 0) {
        digit = n % 10;
        sum += digit;
        n /= 10;
    }
    printf("Sum of odd digits: %d\n", sum);
    return 0;
}
