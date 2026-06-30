#include <stdio.h>

struct Ticket {
    int ticketNo;
    char name[50];
    int seats;
};

int main() {
    struct Ticket t;
    int choice;

    while (1) {
        printf("\n===== Ticket Booking System =====\n");
        printf("1. Book Ticket\n");
        printf("2. View Ticket\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("Enter Ticket Number: ");
            scanf("%d", &t.ticketNo);

            printf("Enter Passenger Name: ");
            scanf("%s", t.name);

            printf("Enter Number of Seats: ");
            scanf("%d", &t.seats);

            printf("Ticket booked successfully.\n");
            break;

        case 2:
            printf("\n===== Ticket Details =====\n");
            printf("Ticket Number : %d\n", t.ticketNo);
            printf("Passenger Name: %s\n", t.name);
            printf("Seats Booked  : %d\n", t.seats);
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