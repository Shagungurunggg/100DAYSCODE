#include <stdio.h>
int main() {
    int i, j, k;
    for(i = 5; i >= 1; i--) {
        for (int k = 5; k >= 5 - i; k--) {
            printf(" ");
        }
        {
        for(j = 5; j >= i; j--) {
            printf("%d", j);
        }

        }
        printf("\n");
    }
    return 0;
}
