#include <stdio.h>
int main() {
    int lcm = 0, n1, n2, max;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);
    max = (n1 > n2) ? n1 : n2;
    for(int i = max; ; i += max) {
        if(i % n1 == 0 && i % n2 == 0) {
            lcm = i;
            break;
        }
    }
    printf("LCM of %d and %d is %d\n", n1, n2, lcm);
    return 0;
}
