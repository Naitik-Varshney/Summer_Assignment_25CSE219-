#include <stdio.h>
#include <string.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    struct Student s[100];
    int n, i, choice, roll, found;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i=0;i<n;i++)
    {
        printf("\nStudent %d\n",i+1);

        printf("Roll: ");
        scanf("%d",&s[i].roll);

        printf("Name: ");
        scanf("%s",s[i].name);

        printf("Marks: ");
        scanf("%f",&s[i].marks);
    }

    do
    {
        printf("\n===== Student Record Menu =====\n");
        printf("1. Display All Students\n");
        printf("2. Search Student by Roll\n");
        printf("3. Update Marks\n");
        printf("4. Exit\n");
        printf("Enter Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("\nStudent Records\n");
                for(i=0;i<n;i++)
                {
                    printf("\nRoll : %d",s[i].roll);
                    printf("\nName : %s",s[i].name);
                    printf("\nMarks: %.2f\n",s[i].marks);
                }
                break;

            case 2:
                found=0;
                printf("Enter Roll: ");
                scanf("%d",&roll);

                for(i=0;i<n;i++)
                {
                    if(s[i].roll==roll)
                    {
                        printf("\nName : %s",s[i].name);
                        printf("\nMarks: %.2f\n",s[i].marks);
                        found=1;
                    }
                }

                if(!found)
                    printf("Student Not Found.\n");
                break;

            case 3:
                printf("Enter Roll: ");
                scanf("%d",&roll);

                for(i=0;i<n;i++)
                {
                    if(s[i].roll==roll)
                    {
                        printf("Enter New Marks: ");
                        scanf("%f",&s[i].marks);
                    }
                }
                break;

            case 4:
                printf("Thank You\n");
                break;

            default:
                printf("Invalid Choice");
        }

    }while(choice!=4);

    return 0;
}