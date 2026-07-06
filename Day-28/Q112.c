#include <stdio.h>

struct Contact {
    char name[50];
    char phone[20];
};

int main() {
    struct Contact contact[100];
    int n, choice, i, found;
    char searchName[50];

    printf("Enter Number of Contacts: ");
    scanf("%d", &n);

    do {
        printf("\n----- Contact Management System -----\n");
        printf("1. Add Contacts\n");
        printf("2. Display Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                for(i = 0; i < n; i++) {
                    printf("\nContact %d\n", i + 1);

                    printf("Enter Name: ");
                    scanf("%s", contact[i].name);

                    printf("Enter Phone Number: ");
                    scanf("%s", contact[i].phone);
                }
                break;

            case 2:
                printf("\nContact List\n");
                printf("Name\tPhone\n");

                for(i = 0; i < n; i++) {
                    printf("%s\t%s\n",
                           contact[i].name,
                           contact[i].phone);
                }
                break;

            case 3:
                printf("Enter Name to Search: ");
                scanf("%s", searchName);

                found = 0;

                for(i = 0; i < n; i++) {
                    int j = 0;
                    while(contact[i].name[j] == searchName[j] &&
                          contact[i].name[j] != '\0' &&
                          searchName[j] != '\0') {
                        j++;
                    }

                    if(contact[i].name[j] == '\0' &&
                       searchName[j] == '\0') {
                        printf("\nContact Found\n");
                        printf("Name  : %s\n", contact[i].name);
                        printf("Phone : %s\n", contact[i].phone);
                        found = 1;
                        break;
                    }
                }

                if(!found)
                    printf("Contact Not Found!\n");
                break;

            case 4:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}