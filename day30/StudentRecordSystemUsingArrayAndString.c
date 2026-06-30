#include <stdio.h>

int main() {
    int roll[100], n = 0, choice, i, search, found;
    char name[100][50];
    float marks[100];

    while (1) {
        printf("\n===== Student Record System =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student by Roll\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("Enter Roll Number: ");
            scanf("%d", &roll[n]);

            printf("Enter Name: ");
            scanf("%s", name[n]);

            printf("Enter Marks: ");
            scanf("%f", &marks[n]);

            n++;
            printf("Student added successfully.\n");
            break;

        case 2:
            if (n == 0) {
                printf("No records found.\n");
            } else {
                printf("\nRoll\tName\tMarks\n");
                for (i = 0; i < n; i++) {
                    printf("%d\t%s\t%.2f\n", roll[i], name[i], marks[i]);
                }
            }
            break;

        case 3:
            printf("Enter Roll Number to Search: ");
            scanf("%d", &search);

            found = 0;
            for (i = 0; i < n; i++) {
                if (roll[i] == search) {
                    printf("\nStudent Found:\n");
                    printf("Roll : %d\n", roll[i]);
                    printf("Name : %s\n", name[i]);
                    printf("Marks: %.2f\n", marks[i]);
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Student not found.\n");
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