 A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.
   #include <stdio.h>

int main() {
    FILE *fp = fopen("numbers.txt", "r");
    if (fp == NULL) return 0;

    int num, sum = 0, count = 0;
    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(fp);

    if (count == 0) {
        printf("Sum = 0\nAverage = 0.00");
    } else {
        printf("Sum = %d\nAverage = %.2f", sum, (float)sum / count);
    }

    return 0;
}
