 Search for an element in an array using linear search.
  #include <stdio.h> 
int main()
{
    int n, i, search_linear, found = 0;
    int arr[100];
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &search_linear);
    for (i = 0; i < n; i++)
    {
        if (arr[i] == search_linear)
        {
            found = 1;
            break;
        }
    }
    if (found == 1)
        printf("Element found at index %d\n", i);
    else
        printf("Element not found\n");
    return 0;
}
