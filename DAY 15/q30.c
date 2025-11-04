Write a program to reverse a given number

#include <stdio.h>
int main() {
    int reversed = 0, n, remainder, original;
    printf("Enter an integer: ");
    scanf("%d", &n);
    original = n;
    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    printf("Reversed Number: %d\n", reversed);
}
