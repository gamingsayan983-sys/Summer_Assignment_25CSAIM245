#include <stdio.h>

int id[100], n = 0;
char name[100][50];
float marks[100];

void addStudent() {
    printf("Enter Roll Number: ");
    scanf("%d", &id[n]);

    printf("Enter Name: ");
    scanf("%s", name[n]);

    printf("Enter Marks: ");
    scanf("%f", &marks[n]);

    n++;
    printf("Student added successfully.\n");
}

void displayStudents() {
    int i;

    if (n == 0) {
        printf("No records found.\n");
        return;
    }

    printf("\nRoll\tName\tMarks\n");
    for (i = 0; i < n; i++) {
        printf("%d\t%s\t%.2f\n", id[i], name[i], marks[i]);
    }
}

void searchStudent() {
    int i, search, found = 0;

    printf("Enter Roll Number to Search: ");
    scanf("%d", &search);

    for (i = 0; i < n; i++) {
        if (id[i] == search) {
            printf("\nStudent Found:\n");
            printf("Roll  : %d\n", id[i]);
            printf("Name  : %s\n", name[i]);
            printf("Marks : %.2f\n", marks[i]);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Student not found.\n");
}

int main() {
    int choice;

    while (1) {
        printf("\n===== Student Management Mini Project =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
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