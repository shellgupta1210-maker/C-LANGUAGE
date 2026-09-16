#include <stdio.h>

int main() {
    float costPrice, sellingPrice, amount, percentage;

    // Input Cost Price and Selling Price
    printf("Enter Cost Price (CP): ");
    scanf("%f", &costPrice);
    
    printf("Enter Selling Price (SP): ");
    scanf("%f", &sellingPrice);

    // Check for Profit, Loss, or Break-even
    if (sellingPrice > costPrice) {
        amount = sellingPrice - costPrice;
        percentage = (amount / costPrice) * 100;
        printf("Profit amount: %.2f\n", amount);
        printf("Profit percentage: %.2f%%\n", percentage);
    } 
    else if (costPrice > sellingPrice) {
        amount = costPrice - sellingPrice;
        percentage = (amount / costPrice) * 100;
        printf("Loss amount: %.2f\n", amount);
        printf("Loss percentage: %.2f%%\n", percentage);
    } 
    else {
        printf("No Profit, No Loss.\n");
    }

    return 0;
}
