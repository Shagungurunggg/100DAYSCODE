Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.

    
#include <stdio.h>
int main()
{
    int arr[100];
    int ceil, n, x;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements in sorted order: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to find the ceil: ");
    scanf("%d", &x);
    ceil = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] >= x) {
            ceil = arr[i];
            break;
        }
    }
    if (ceil != -1) {
        printf("Ceil of %d is %d\n", x, ceil);
    } else {
        printf(" -1\n");
    }
    return 0;
}
