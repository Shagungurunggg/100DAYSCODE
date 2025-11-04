Write a program to find profit or loss percentage given cost price and selling price.


#include <stdio.h>
int main()
{
    double selling_price, cost_price, profit, loss;
    printf("Enter cost price: ");
    scanf("%lf", &cost_price);
    printf("Enter selling price: ");
    scanf("%lf", &selling_price);
    if (selling_price > cost_price) {
        profit = selling_price - cost_price;
        printf("Profit: %.2lf\n", profit);
    } else if (cost_price > selling_price) {
        loss = cost_price - selling_price;
        printf("Loss: %.2lf\n", loss);
    } else {
        printf("No profit, no loss.\n");
        return 0;
}
