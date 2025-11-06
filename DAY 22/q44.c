Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

#include <stdio.h>
int main()
{
    int i, n;
    double sum=0.0;
    printf("Enter a number : ");
    scanf("%d", &n);
    for (i=1; i<=n; i++)
    {
       sum += (double)(2 * i - 1) / (2 * i);
    }
    printf("Sum of series is : %.2lf\n", sum);
    return 0;
}
