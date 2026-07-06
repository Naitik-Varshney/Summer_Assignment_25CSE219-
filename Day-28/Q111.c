#include <stdio.h>

int main() {
    int totalSeats = 50;
    int booked = 0;
    int choice, seats;

    do {
        printf("\n----- Ticket Booking System -----\n");
        printf("1. Book Ticket\n");
        printf("2. View Available Seats\n");
        printf("3. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Enter Number of Seats to Book: ");
                scanf("%d", &seats);

                if(booked + seats <= totalSeats) {
                    booked += seats;
                    printf("Booking Successful.\n");
                } else {
                    printf("Not Enough Seats Available.\n");
                }
                break;

            case 2:
                printf("Total Seats     : %d\n", totalSeats);
                printf("Booked Seats    : %d\n", booked);
                printf("Available Seats : %d\n", totalSeats - booked);
                break;

            case 3:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 3);

    return 0;
}