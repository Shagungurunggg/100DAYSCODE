Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.

    
#include <stdio.h>
int main()
{
    int days;
    double fine;
    printf("Enter number of days the book is returned late: ");
    scanf("%d", &days);
    if (days <= 5) {
        fine = days * 2.00;
        printf("Fine: %.2lf\n", fine);
    } else if (days <= 10) {
        fine = (5 * 2.00) + ((days - 5) * 4.00);
        printf("Fine: %.2lf\n", fine);
    } else if (days <= 30) {
        fine = (5 * 2.00) + (15 * 4.00) + ((days - 20) * 6.00);
        printf("Fine: %.2lf\n", fine);
    } else {
        printf("Membership cancelled\n");
        return 0;  
    }
}
