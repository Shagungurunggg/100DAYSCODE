Write a program to take a number as input and print its equivalent binary representation.
    
#include <stdio.h>
int main() {
    int binary_equivalent, number, remainder, base = 1;
    binary_equivalent = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    while (number > 0) {
        remainder = number % 2;
        binary_equivalent += remainder * base;
        number /= 2;
        base *= 10;
    }
    printf("Binary equivalent: %d\n", binary_equivalent);
    return 0; 
}
