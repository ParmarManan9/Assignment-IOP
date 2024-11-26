#include <stdio.h>

// Structure definition
struct Item {
    char item_name[50];
    int quantity;
    float price;
    float amount;
};

// User-defined function to calculate amount
void calculateAmount(struct Item *item);

int main() {
    struct Item item;

    // Input the item details
    printf("Enter item name: ");
    scanf("%s", item.item_name);

    printf("Enter quantity: ");
    scanf("%d", &item.quantity);

    printf("Enter price: ");
    scanf("%f", &item.price);

    // Call the function to calculate amount
    calculateAmount(&item);

    // Print the result
    printf("\nItem Name: %s\n", item.item_name);
    printf("Quantity: %d\n", item.quantity);
    printf("Price: %.2f\n", item.price);
    printf("Amount: %.2f\n", item.amount);

    return 0;
}

// Function to calculate amount
void calculateAmount(struct Item *item) {
    item->amount = item->quantity * item->price;
}
