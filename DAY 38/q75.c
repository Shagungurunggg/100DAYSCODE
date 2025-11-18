Add two matrices.
  #include <stdio.h>
int main() {
    int n, i, j, sum = 0;
    int matrix1[10][10], matrix2[10][10], result[10][10];
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &n, &n);
    printf("Enter elements of first matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("Enter elements of second matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }   
    
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            sum += matrix1[i][j] + matrix2[i][j];
        }
    }
    printf("Sum of all elements: %d\n", sum);
    return 0;
}
