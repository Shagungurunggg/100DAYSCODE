Perform diagonal traversal of a matrix.
#include <stdio.h>

int main() {
    int r, c;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &r, &c);  

    int a[10][10];  
    int i, j;

    
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    
    for(int k = 0; k < c; k++) {
        i = 0;
        j = k;
        while(i < r && j >= 0) {
            printf("%d ", a[i][j]);
            i++;
            j--;
        }
    }

    
    for(int k = 1; k < r; k++) {
        i = k;
        j = c - 1;
        while(i < r && j >= 0) {
            printf("%d ", a[i][j]);
            i++;
            j--;
        }
    }

    printf("\n");
    return 0;
}
