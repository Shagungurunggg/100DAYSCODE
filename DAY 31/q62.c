 Reverse an array without taking extra space.
   #include <stdio.h>
int main()
{
    int n, i, reverse;
    int arr[100];
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Elements in reverse order:\n");
    for (i = n - 1; i >= 0; i--)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}
