#include <stdio.h>
#include <string.h>

int main(void) {
    int bookID;
    char title[50], author[50], category;
    float price;

    printf("Enter Book ID: ");
    scanf("%d", &bookID);
    getchar();

    printf("Enter Book Title: ");
    fgets(title, sizeof(title), stdin);
    title[strcspn(title, "\n")] = '\0';

    printf("Enter Author Name: ");
    fgets(author, sizeof(author), stdin);
    author[strcspn(author, "\n")] = '\0';

    printf("Enter Price: ");
    scanf("%f", &price);

    printf("Enter Category (T/R/S): ");
    scanf(" %c", &category);

    printf("\n--- LIBRARY BOOK PROFILE ---\n");
    printf("Book ID    : %d\n", bookID);
    printf("Book Title : %s\n", title);
    printf("Author     : %s\n", author);
    printf("Price      : Rs. %.2f\n", price);
    printf("Category   : %c\n", category);

    return 0;
}
