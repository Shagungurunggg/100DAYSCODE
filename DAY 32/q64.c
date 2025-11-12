 Find the digit that occurs the most times in an integer number.
   #include <stdio.h>
int main()
{
    int n, i, most_occuring, digit;
    int arr[100];
    int count[10] = {0};
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements (digits 0-9):\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] >= 0 && arr[i] <= 9)
        {
            count[arr[i]]++;
        }
    }
    most_occuring = 0;
    for (i = 1; i < 10; i++)
    {
        if (count[i] > count[most_occuring])
        {
            most_occuring = i;
        }
    }
    printf("Most occurring digit: %d\n", most_occuring);
    return 0;
}
