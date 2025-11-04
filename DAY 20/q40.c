#include <stdio.h>
int main()
{
    int bin_num, complement = 0, base = 1, rem;
    printf("Enter a binary number: ");
    scanf("%d", &bin_num);
    while (bin_num > 0) {
        rem = bin_num % 10;
        if (rem == 0)
            rem = 1;
        else
            rem = 0;
        complement += rem * base;
        bin_num /= 10;
        base *= 10;
    }
    printf("The complement is: %d\n", complement);
    return 0;
}
