#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee emp[100];
    int n, i, choice, id, found;

    printf("Enter Number of Employees: ");
    scanf("%d", &n);

    do {
        printf("\n----- Employee Management System -----\n");
        printf("1. Add Employees\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                for(i = 0; i < n; i++) {
                    printf("\nEmployee %d\n", i + 1);
                    printf("Enter ID: ");
                    scanf("%d", &emp[i].id);
                    printf("Enter Name: ");
                    scanf("%s", emp[i].name);
                    printf("Enter Salary: ");
                    scanf("%f", &emp[i].salary);
                }
                break;

            case 2:
                printf("\nID\tName\tSalary\n");
                for(i = 0; i < n; i++) {
                    printf("%d\t%s\t%.2f\n", emp[i].id, emp[i].name, emp[i].salary);
                }
                break;

            case 3:
                printf("Enter Employee ID: ");
                scanf("%d", &id);

                found = 0;
                for(i = 0; i < n; i++) {
                    if(emp[i].id == id) {
                        printf("\nEmployee Found\n");
                        printf("ID     : %d\n", emp[i].id);
                        printf("Name   : %s\n", emp[i].name);
                        printf("Salary : %.2f\n", emp[i].salary);
                        found = 1;
                        break;
                    }
                }

                if(!found)
                    printf("Employee Not Found!\n");
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