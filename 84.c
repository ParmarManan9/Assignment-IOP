 // WRITE A FUNCTION TO READ INFORMATION OF BOOK AND DISPLAY THE INFORMATION USING POINTER TO STRUCTURE.
#include <stdio.h>
struct Book {
    char title[100];
    char author[100];
    float price;
};
void readBookInfo(struct Book *b) {
    printf("Enter title of the book: ");
    scanf(" %[^\n]%*c", b->title);
    printf("Enter author of the book: ");
    scanf(" %[^\n]%*c", b->author);
    printf("Enter price of the book: ");
    scanf("%f", &b->price);
}
void displayBookInfo(struct Book *b) {
    printf("\nBook Information:\n");
    printf("Title: %s\n", b->title);
    printf("Author: %s\n", b->author);
    printf("Price: %.2f\n", b->price);
}
int main() {
    struct Book myBook;
    struct Book *ptr = &myBook;
    readBookInfo(ptr);
    displayBookInfo(ptr);
    return 0;
}
