 Find the second largest element in an array.
#include <stdio.h>
int main() {
    int i, n, second_largest, largest;
    int arr[100];
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements in sorted order:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    if (n < 2) {
        printf("Array must contain at least two elements.\n");
        return 1;
    }
    largest = arr[n - 1];
    for (i = n - 2; i >= 0; i--) {
        if (arr[i] < largest) {
            second_largest = arr[i];
            break;
        }
    }
    if (i == -1) {
        printf("All elements are equal.\n");
    } else {
        printf("The second largest element is %d.\n", second_largest);
    }
    return 0;
}
