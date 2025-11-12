 Write a program to calculate the factorial of a number.
#include <stdio.h>
int main() 
{
    int n, i, odd_count = 0, even_count = 0;
    int arr[100];
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
            even_count++;
        else
            odd_count++;
    }
    printf("Number of odd elements: %d\n", odd_count);
    printf("Number of even elements: %d\n", even_count);
    return 0;
}

