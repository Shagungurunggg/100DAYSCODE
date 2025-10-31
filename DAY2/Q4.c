// Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>
int main() {
    float radius, area, circm;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    area = PI * radius * radius;
    circm = 2 * PI * radius;
    printf("Area of circle = %.2f\n", area);
    printf("Circm of circle = %.2f\n", circm);
    return 0;
}
