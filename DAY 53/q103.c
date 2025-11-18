Write a Program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1.

    
#include <stdio.h>
int main()
{
    int arr[100];
    int n, pivot_index = -1, pivot, right_sum, left_sum;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements in sorted order: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    right_sum = 0;
    for (int i = 0; i < n; i++) {
        right_sum += arr[i];
    }
    left_sum = 0;
    for (int i = 0; i < n; i++) {
        right_sum -= arr[i];
        if (left_sum == right_sum) {
            pivot_index = i;
            break;
        }
        left_sum += arr[i];
    }
    if (pivot_index != -1) {
        pivot = arr[pivot_index];
        printf("Pivot element is %d at index %d\n", pivot, pivot_index);
    } else {
        printf("-1\n");
    }
    return 0;
}
        
