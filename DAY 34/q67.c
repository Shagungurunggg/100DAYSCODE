 Insert an element in an array at a given position.
   #include <stdio.h>
int main() {
    int i, n, num, position;    
    int arr[100];
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements in sorted order:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number to insert: ");
    scanf("%d", &num);
    printf("Enter the position to insert (0 to %d): ", n);
    scanf("%d", &position);
    if (position < 0 || position > n) {
        printf("Invalid position!\n");
        return 1;
    }
    for (i = n; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = num;
    n++;
    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
