Find the sum of main diagonal elements for a square matrix.
#include <stdio.h>
int main()
{
    int n, i, j, diag_sum = 0;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);
    int matrix[n][n];
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    for(i = 0; i < n; i++)
    {
        diag_sum += matrix[i][i];
    }
    printf("Sum of the main diagonal elements: %d\n", diag_sum);
    return 0;
}
