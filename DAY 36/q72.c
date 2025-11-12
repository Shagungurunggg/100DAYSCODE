 Find the sum of all elements in a matrix.
   #include <stdio.h>
int main() {
    int n, i, row, col, sum = 0;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &row, &col);
    int matrix[row][col];
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
    }
    printf("The sum of all elements in the matrix is: %d\n", sum);
    return 0;
} 
