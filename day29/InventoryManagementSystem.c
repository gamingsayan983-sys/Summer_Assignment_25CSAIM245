#include <stdio.h>

struct Item {
    int id;
    char name[50];
    int quantity;
    float price;
};

int main() {
    struct Item item[100];
    int n = 0, choice, i, id, found;

    while (1) {
        printf("\n===== Inventory Management System =====\n");
        printf("1. Add Item\n");
        printf("2. Display All Items\n");
        printf("3. Search Item by ID\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("Enter Item ID: ");
            scanf("%d", &item[n].id);

            printf("Enter Item Name: ");
            scanf("%s", item[n].name);

            printf("Enter Quantity: ");
            scanf("%d", &item[n].quantity);

            printf("Enter Price: ");
            scanf("%f", &item[n].price);

            n++;
            printf("Item added successfully.\n");
            break;

        case 2:
            if (n == 0) {
                printf("No items found.\n");
            } else {
                printf("\nID\tName\tQuantity\tPrice\n");
                for (i = 0; i < n; i++) {
                    printf("%d\t%s\t%d\t\t%.2f\n",
                           item[i].id, item[i].name,
                           item[i].quantity, item[i].price);
                }
            }
            break;

        case 3:
            printf("Enter Item ID to Search: ");
            scanf("%d", &id);

            found = 0;
            for (i = 0; i < n; i++) {
                if (item[i].id == id) {
                    printf("\nItem Found:\n");
                    printf("ID       : %d\n", item[i].id);
                    printf("Name     : %s\n", item[i].name);
                    printf("Quantity : %d\n", item[i].quantity);
                    printf("Price    : %.2f\n", item[i].price);
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Item not found.\n");
            break;

        case 4:
            printf("Exiting...\n");
            return 0;

        default:
            printf("Invalid choice.\n");
        }
    }

    return 0;
}