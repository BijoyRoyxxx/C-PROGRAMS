#include <stdio.h>

struct Book {
    int id;
    char name[50];
    float price;
};

int main() {
    int n;
    printf("Enter number of books: ");
    scanf("%d", &n);

    struct Book b[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details of book %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &b[i].id);
        printf("Name: ");
        scanf("%s", b[i].name);
        printf("Price: ");
        scanf("%f", &b[i].price);
    }

    printf("\n--- Book Details ---\n");
    for (int i = 0; i < n; i++) {
        printf("ID: %d  Name: %s  Price: %.2f\n", b[i].id, b[i].name, b[i].price);
    }

    return 0;
}