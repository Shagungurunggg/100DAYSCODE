Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit

    
#include <stdio.h>
int main() {
    int unit;
    double bill;
    printf("Enter number of units consumed: ");
    scanf("%d", &unit);
    if (unit <= 100) {
        bill = unit * 5.00;
    } else if (unit <= 200) {
        bill = (100 * 5.00) + ((unit - 100) * 7.00);
    } else if (unit <= 300) {
        bill = (100 * 5.00) + (100 * 7.00) + ((unit - 200) * 10.00);
    } else {
        bill = (100 * 5.00) + (100 * 7.00) + (100 * 10.00) + ((unit - 300) * 12.00);
    }
    printf("Electricity Bill: %.2lf\n", bill);
    return 0;
}
