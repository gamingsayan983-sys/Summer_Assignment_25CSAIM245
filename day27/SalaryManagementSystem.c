#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float basic, hra, da, gross;
};

int main() {
    struct Employee e[100];
    int n = 0, choice, i;

    while (1) {
        printf("\n===== Salary Management System =====\n");
        printf("1. Add Employee Salary\n");
        printf("2. Display Salary Details\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("Enter Employee ID: ");
            scanf("%d", &e[n].id);

            printf("Enter Employee Name: ");
            scanf("%s", e[n].name);

            printf("Enter Basic Salary: ");
            scanf("%f", &e[n].basic);

            printf("Enter HRA: ");
            scanf("%f", &e[n].hra);

            printf("Enter DA: ");
            scanf("%f", &e[n].da);

            e[n].gross = e[n].basic + e[n].hra + e[n].da;

            n++;
            printf("Salary record added successfully.\n");
            break;

        case 2:
            if (n == 0) {
                printf("No salary records found.\n");
            } else {
                printf("\nID\tName\tBasic\tHRA\tDA\tGross\n");
                for (i = 0; i < n; i++) {
                    printf("%d\t%s\t%.2f\t%.2f\t%.2f\t%.2f\n",
                           e[i].id, e[i].name, e[i].basic,
                           e[i].hra, e[i].da, e[i].gross);
                }
            }
            break;

        case 3:
            printf("Exiting...\n");
            return 0;

        default:
            printf("Invalid choice.\n");
        }
    }

    return 0;
}