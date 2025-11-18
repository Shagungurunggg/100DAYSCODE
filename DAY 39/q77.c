 Check if the elements on the diagonal of a matrix are distinct.
   #include <stdio.h>
int main() {
    int n, i, j, distinct_diagonal = 1;
    printf("Enter the order of the matrix: ");
    scanf("%d", &n);
    int matrix[10][10];
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i != j && matrix[i][j] == matrix[j][i]) {
                distinct_diagonal = 0;
                break;
            }
        }
    }
    if (distinct_diagonal) {
        printf("All elements off the main diagonal are distinct.\n");
    } else {
        printf("There are duplicate elements off the main diagonal.\n");
    }
    return 0;
}
