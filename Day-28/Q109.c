#include <stdio.h>

struct Book {
    int id;
    char title[50];
    char author[50];
};

int main() {
    struct Book book[100];
    int n, choice, i, searchId, found = 0;

    printf("Enter Number of Books: ");
    scanf("%d", &n);

    do {
        printf("\n----- Library Management System -----\n");
        printf("1. Add Books\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                for(i = 0; i < n; i++) {
                    printf("\nBook %d\n", i + 1);

                    printf("Enter Book ID: ");
                    scanf("%d", &book[i].id);

                    printf("Enter Book Title: ");
                    scanf("%s", book[i].title);

                    printf("Enter Author Name: ");
                    scanf("%s", book[i].author);
                }
                break;

            case 2:
                printf("\nBook Records\n");
                printf("ID\tTitle\tAuthor\n");

                for(i = 0; i < n; i++) {
                    printf("%d\t%s\t%s\n",
                           book[i].id,
                           book[i].title,
                           book[i].author);
                }
                break;

            case 3:
                printf("Enter Book ID to Search: ");
                scanf("%d", &searchId);

                found = 0;

                for(i = 0; i < n; i++) {
                    if(book[i].id == searchId) {
                        printf("\nBook Found\n");
                        printf("ID     : %d\n", book[i].id);
                        printf("Title  : %s\n", book[i].title);
                        printf("Author : %s\n", book[i].author);
                        found = 1;
                        break;
                    }
                }

                if(!found)
                    printf("Book Not Found!\n");
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