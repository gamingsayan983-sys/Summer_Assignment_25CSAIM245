#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float m1, m2, m3, total, percentage;
};

int main() {
    struct Student s;
    int choice;

    while (1) {
        printf("\n===== Marksheet Generation System =====\n");
        printf("1. Enter Student Details\n");
        printf("2. Display Marksheet\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("Enter Roll Number: ");
            scanf("%d", &s.roll);

            printf("Enter Name: ");
            scanf("%s", s.name);

            printf("Enter Marks in Subject 1: ");
            scanf("%f", &s.m1);

            printf("Enter Marks in Subject 2: ");
            scanf("%f", &s.m2);

            printf("Enter Marks in Subject 3: ");
            scanf("%f", &s.m3);

            s.total = s.m1 + s.m2 + s.m3;
            s.percentage = s.total / 3;

            printf("Student details saved successfully.\n");
            break;

        case 2:
            printf("\n===== Marksheet =====\n");
            printf("Roll Number : %d\n", s.roll);
            printf("Name        : %s\n", s.name);
            printf("Subject 1   : %.2f\n", s.m1);
            printf("Subject 2   : %.2f\n", s.m2);
            printf("Subject 3   : %.2f\n", s.m3);
            printf("Total Marks : %.2f\n", s.total);
            printf("Percentage  : %.2f%%\n", s.percentage);
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