 Find the transpose of a matrix.
 #include <stdio.h>
int main() {
    int n, i, transpose[10][10], matrix[10][10];
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &n, &n);
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    
    for (i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }

    
    printf("Transpose of the matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
