#include<stdio.h>
int main()
{
    int choice,total=0;

    printf("Welcome To Foodies Restaurant\n");
    printf("Please Select Items From The Menu below:\n");



        printf("\n====Menu:====\n");
        printf("1. Burger - Rs 150\n");
        printf("2. Pizza - Rs 200\n");
        printf("3. Pasta - Rs 120\n");
        printf("4. sandwich - Rs 100\n");
        printf("5. French Fries - Rs 80\n");
        printf("6. Enter 0 to Complete The order \n");

        menu:printf("\nEnter your Choice=");
        scanf("%d",&choice);


        switch(choice)
        {
        case 1:
            total+=150;
            printf("\nBurger is add into the order.subtotal= Rs%d",total);
            break;
        case 2:
            total+=200;
            printf("\nPizza is add into the order.subtotal= Rs%d",total);
            break;
        case 3:
            total+=120;
            printf("\npasta is add into the order.subtotal= Rs%d",total);
            break;
        case 4:
            total+=100;
            printf("\nsandwich is add into the order.subtotal= Rs%d",total);
            break;
        case 5:
            total+=80;
            printf("\nFrench Fries is add into the order.subtotal= Rs%d",total);
            break;
        case 0:
                printf("\n order is complete.");
                printf("\n Total bill to paid=%d",total);
                break;
        default:
            printf("\n enter choice is Invalid");

        }

        if(choice!=0)
        {
            goto menu;
        }


}
