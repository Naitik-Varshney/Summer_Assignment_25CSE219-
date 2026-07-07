#include <stdio.h>

struct Item
{
    int id;
    char name[50];
    int quantity;
    float price;
};

int main()
{
    struct Item item[100];
    int n=0, choice, i;

    do
    {
        printf("\n===== INVENTORY MANAGEMENT =====\n");
        printf("1. Add Item\n");
        printf("2. Display Items\n");
        printf("3. Search Item\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("Enter Item ID: ");
                scanf("%d",&item[n].id);

                printf("Enter Item Name: ");
                scanf("%s",item[n].name);

                printf("Enter Quantity: ");
                scanf("%d",&item[n].quantity);

                printf("Enter Price: ");
                scanf("%f",&item[n].price);

                n++;
                printf("Item Added Successfully.\n");
                break;

            case 2:
                printf("\nID\tName\tQty\tPrice\n");

                for(i=0;i<n;i++)
                {
                    printf("%d\t%s\t%d\t%.2f\n",
                           item[i].id,
                           item[i].name,
                           item[i].quantity,
                           item[i].price);
                }
                break;

            case 3:
            {
                int id, found=0;

                printf("Enter Item ID to Search: ");
                scanf("%d",&id);

                for(i=0;i<n;i++)
                {
                    if(item[i].id==id)
                    {
                        printf("\nItem Found\n");
                        printf("ID : %d\n",item[i].id);
                        printf("Name : %s\n",item[i].name);
                        printf("Quantity : %d\n",item[i].quantity);
                        printf("Price : %.2f\n",item[i].price);
                        found=1;
                        break;
                    }
                }

                if(!found)
                    printf("Item Not Found.\n");

                break;
            }

            case 4:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    }while(choice!=4);

    return 0;
}