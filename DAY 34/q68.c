 Delete an element from an array.
   #include <stdio.h>
int main() {
    int n, i, delete;
    int arr[100];
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements in sorted order:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to delete: ");
    scanf("%d", &delete);
    int found = 0;
    for (i = 0; i < n; i++) {
        if (arr[i] == delete) {
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Element %d not found in the array.\n", delete);
        return 1;
    }
    for (i = i; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
    printf("Array after deletion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
