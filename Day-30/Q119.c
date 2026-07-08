#include <stdio.h>
#include <string.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    struct Employee e[100];
    int n,i,choice,id,found;

    printf("Enter Number of Employees: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nEmployee %d\n",i+1);

        printf("ID: ");
        scanf("%d",&e[i].id);

        printf("Name: ");
        scanf("%s",e[i].name);

        printf("Salary: ");
        scanf("%f",&e[i].salary);
    }

    do
    {
        printf("\n===== Employee Menu =====\n");
        printf("1.Display Employees\n");
        printf("2.Search Employee\n");
        printf("3.Update Salary\n");
        printf("4.Exit\n");

        printf("Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                for(i=0;i<n;i++)
                {
                    printf("\nID     : %d",e[i].id);
                    printf("\nName   : %s",e[i].name);
                    printf("\nSalary : %.2f\n",e[i].salary);
                }
                break;

            case 2:
                found=0;

                printf("Enter Employee ID: ");
                scanf("%d",&id);

                for(i=0;i<n;i++)
                {
                    if(e[i].id==id)
                    {
                        printf("\nName   : %s",e[i].name);
                        printf("\nSalary : %.2f\n",e[i].salary);
                        found=1;
                    }
                }

                if(!found)
                    printf("Employee Not Found\n");

                break;

            case 3:
                printf("Enter Employee ID: ");
                scanf("%d",&id);

                for(i=0;i<n;i++)
                {
                    if(e[i].id==id)
                    {
                        printf("Enter New Salary: ");
                        scanf("%f",&e[i].salary);
                    }
                }

                break;

            case 4:
                printf("Exit");
                break;

            default:
                printf("Invalid Choice");
        }

    }while(choice!=4);

    return 0;
}