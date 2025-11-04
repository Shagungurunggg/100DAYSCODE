#include <stdio.h>
int main() {
    int perfect_num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &perfect_num);
    for (int i = 1; i <= perfect_num / 2; i++) {
        if (perfect_num % i == 0) {
            sum += i;
        }
    }
    if (sum == perfect_num) {
        printf("%d is a perfect number.\n", perfect_num);
    } else {
        printf("%d is not a perfect number.\n", perfect_num);
    }
    return 0;
}   
