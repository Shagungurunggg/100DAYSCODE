Write a program to input time in seconds and convert it to hours:minutes:seconds format.

    
#include <stdio.h>
int main() {
    int second, hours, minutes;
    printf("Enter time in seconds: ");
    scanf("%d", &second);
    hours = second / 3600;
    minutes = (second % 3600) / 60;
    second = second % 60;
    printf("Time: %d hours, %d minutes, %d seconds\n", hours, minutes, second);
    return 0;
  }
    
