Q35: Write a program to print all factors of a given number.

#include <stdio.h>
int main() {
    int factor = 1, n, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Error: Factors of a negative number doesn't exist.\n");
        return 0;
    }
    for(i=1; i<=n; i++)
    {
        if (n % i == 0) {
            printf("%d ", i);
        }
        printf("Factors of %d is %d\n", n, i);
    }
    return 0;
}
