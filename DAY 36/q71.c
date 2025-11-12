 Read and print a matrix.
   #include <stdio.h>
int main()
{
    int i ,j ,row, col;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &row, &col);
    int matrix[row][col];
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("The matrix is :\n");
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
