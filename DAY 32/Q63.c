 Merge two arrays.
   #include <stdio.h>
int main()
{
    int i, n, merge[100], arr1[50], arr2[50], size1, size2, k = 0;
    printf("Enter the size of first array: ");
    scanf("%d", &size1);
    printf("Enter %d elements of first array:\n", size1);
    for (i = 0; i < size1; i++)
    {
        scanf("%d", &arr1[i]);
        merge[k++] = arr1[i];
    }
    printf("Enter the size of second array: ");
    scanf("%d", &size2);
    printf("Enter %d elements of second array:\n", size2);
    for (i = 0; i < size2; i++)
    {
        scanf("%d", &arr2[i]);
        merge[k++] = arr2[i];
    }
    printf("Merged array elements are:\n");
    for (i = 0; i < k; i++)
    {
        printf("%d ", merge[i]);
    }
    printf("\n");
    return 0;
}
