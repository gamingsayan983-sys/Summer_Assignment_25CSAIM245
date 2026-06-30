#include <stdio.h>

int main() {
    int id[100], n = 0, choice, i, search, found;
    char name[100][50];
    float salary[100];

    while (1) {
        printf("\n===== Mini Employee Management System =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee by ID\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("Enter Employee ID: ");
            scanf("%d", &id[n]);

            printf("Enter Employee Name: ");
            scanf("%s", name[n]);

            printf("Enter Salary: ");
            scanf("%f", &salary[n]);

            n++;
            printf("Employee added successfully.\n");
            break;

        case 2:
            if (n == 0) {
                printf("No employee records found.\n");
            } else {
                printf("\nID\tName\tSalary\n");
                for (i = 0; i < n; i++) {
                    printf("%d\t%s\t%.2f\n", id[i], name[i], salary[i]);
                }
            }
            break;

        case 3:
            printf("Enter Employee ID to Search: ");
            scanf("%d", &search);

            found = 0;
            for (i = 0; i < n; i++) {
                if (id[i] == search) {
                    printf("\nEmployee Found:\n");
                    printf("ID     : %d\n", id[i]);
                    printf("Name   : %s\n", name[i]);
                    printf("Salary : %.2f\n", salary[i]);
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Employee not found.\n");
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