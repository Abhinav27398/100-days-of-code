/*
Question:
Write a C program to find profit or loss percentage given 
cost price and selling price.
*/

#include <stdio.h>

int main() {
    float costPrice, sellingPrice, profit, loss;
    float profitPercentage, lossPercentage;

    // Input cost price and selling price
    printf("Enter Cost Price (CP): ");
    scanf("%f", &costPrice);
    printf("Enter Selling Price (SP): ");
    scanf("%f", &sellingPrice);

    if (sellingPrice > costPrice) {
        // Profit case
        profit = sellingPrice - costPrice;
        profitPercentage = (profit / costPrice) * 100;
        printf("Profit: %.2f\n", profit);
        printf("Profit Percentage: %.2f%%\n", profitPercentage);
    }
    else if (sellingPrice < costPrice) {
        // Loss case
        loss = costPrice - sellingPrice;
        lossPercentage = (loss / costPrice) * 100;
        printf("Loss: %.2f\n", loss);
        printf("Loss Percentage: %.2f%%\n", lossPercentage);
    }
    else {
        // No profit, no loss
        printf("No Profit, No Loss.\n");
    }

    return 0;
}
