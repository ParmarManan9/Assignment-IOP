#include <stdio.h>
#include <stdbool.h>

int main() {
    // Define a multidimensional array to store hat sizes
    float hatSizes[][3] = {
        {20.5, 6.5, 6.5},  // {Circumference, US Size, UK Size}
        {21.0, 6.625, 6.625},
        {21.5, 6.75, 6.75},
        {22.0, 6.875, 6.875},
        {22.5, 7.0, 7.0},
        {23.0, 7.125, 7.125},
        {23.5, 7.25, 7.25},
        {24.0, 7.375, 7.375},
        {24.5, 7.5, 7.5},
        {25.0, 7.625, 7.625},
        {25.5, 7.75, 7.75},
        {26.0, 7.875, 7.875},
    };

    int sizeCount = sizeof(hatSizes) / sizeof(hatSizes[0]);
    float headCircumference;
    bool sizeFound = false;

    // Prompt the user for their head circumference
    printf("Welcome to the Hat Size Finder!\n");
    printf("Enter the circumference of your head in inches: ");
    scanf("%f", &headCircumference);

    // Search for the corresponding hat size
    for (int i = 0; i < sizeCount; i++) {
        if (headCircumference <= hatSizes[i][0]) {
            printf("Your recommended hat size:\n");
            printf("- US Size: %.3f\n", hatSizes[i][1]);
            printf("- UK Size: %.3f\n", hatSizes[i][2]);
            sizeFound = true;
            break;
        }
    }

    // If no suitable size is found
    if (!sizeFound) {
        printf("Sorry, we couldn't find a suitable hat size for your head circumference.\n");
    }

    printf("Thank you for using the Hat Size Finder!\n");
    return 0;
}
