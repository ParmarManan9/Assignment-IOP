#include <stdio.h>

// Define an enumeration for colors
enum Color {
    RED,
    GREEN,
    BLUE,
    YELLOW,
    WHITE,
    BLACK
};

// Function to display the hexadecimal color code based on the color enumeration
void displayColorCode(enum Color color);

int main() {
    enum Color color;

    // Input the color as an integer corresponding to the enum values
    printf("Enter a color (0-RED, 1-GREEN, 2-BLUE, 3-YELLOW, 4-WHITE, 5-BLACK): ");
    scanf("%d", &color);

    // Call the function to display the hexadecimal color code
    displayColorCode(color);

    return 0;
}

void displayColorCode(enum Color color) {
    switch (color) {
        case RED:
            printf("Hexadecimal code for RED: #FF0000\n");
            break;
        case GREEN:
            printf("Hexadecimal code for GREEN: #00FF00\n");
            break;
        case BLUE:
            printf("Hexadecimal code for BLUE: #0000FF\n");
            break;
        case YELLOW:
            printf("Hexadecimal code for YELLOW: #FFFF00\n");
            break;
        case WHITE:
            printf("Hexadecimal code for WHITE: #FFFFFF\n");
            break;
        case BLACK:
            printf("Hexadecimal code for BLACK: #000000\n");
            break;
        default:
            printf("Invalid color.\n");
            break;
    }
}
