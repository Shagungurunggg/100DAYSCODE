 Search in a sorted array using binary search.
   #include <stdio.h>
int main() {
    int n, i, binary_search, mid;
    int arr[100];
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements in sorted order:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search for: ");
    scanf("%d", &binary_search);
    int low = 0;
    int high = n - 1;
    int found = 0;
    mid = -1;
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == binary_search) {
            found = 1;
            break;
        } else if (arr[mid] < binary_search) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    if (found) {
        printf("Element %d found at index %d\n", binary_search, mid);
    } else {
        printf("Element %d not found\n", binary_search);
    }
    return 0;
}
