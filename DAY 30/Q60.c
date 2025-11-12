 Write a program to reverse a given number.
#include <stdio.h>
int main() {
    int n, i, positive_count = 0, negative_count = 0, zero_count = 0;
    int arr[100];
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > 0)
            positive_count++;
        else if (arr[i] < 0)
            negative_count++;
        else
            zero_count++;
    }
    printf("Number of positive elements: %d\n", positive_count);
    printf("Number of negative elements: %d\n", negative_count);
    printf("Number of zero elements: %d\n", zero_count);
    return 0;
}

