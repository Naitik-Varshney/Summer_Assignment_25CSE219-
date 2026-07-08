#include <stdio.h>
#include <string.h>

struct Book
{
    int id;
    char title[50];
    char author[50];
};

int main()
{
    struct Book b[100];
    int n,i,choice,id,found;

    printf("Enter Number of Books: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nBook %d\n",i+1);

        printf("Book ID: ");
        scanf("%d",&b[i].id);

        printf("Title: ");
        scanf("%s",b[i].title);

        printf("Author: ");
        scanf("%s",b[i].author);
    }

    do
    {
        printf("\n===== Library Menu =====\n");
        printf("1.Display Books\n");
        printf("2.Search Book\n");
        printf("3.Exit\n");

        printf("Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                for(i=0;i<n;i++)
                {
                    printf("\nBook ID : %d",b[i].id);
                    printf("\nTitle   : %s",b[i].title);
                    printf("\nAuthor  : %s\n",b[i].author);
                }
                break;

            case 2:
                found=0;
                printf("Enter Book ID: ");
                scanf("%d",&id);

                for(i=0;i<n;i++)
                {
                    if(b[i].id==id)
                    {
                        printf("\nBook Found");
                        printf("\nTitle : %s",b[i].title);
                        printf("\nAuthor: %s\n",b[i].author);
                        found=1;
                    }
                }

                if(!found)
                    printf("Book Not Found\n");

                break;

            case 3:
                printf("Exit");
                break;

            default:
                printf("Invalid Choice");
        }

    }while(choice!=3);

    return 0;
}