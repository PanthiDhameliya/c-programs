#include<stdio.h>
int main()
{

    int ch,w,starting_balance=5000;
       do
       {
        printf("1). withdraw\n");
        printf("2). Exit\n");
        printf("Enter The choice:");
        scanf(" %d",&ch);
        if(ch==1)
        {
            printf("\nEnter The amount to withdraw:");
            scanf("%d",&w);
           if(w<=5000)
            {
                starting_balance-=w;
                printf("new balance: %d\n",starting_balance);
            }
           else
            {
                printf("You have not balance");
            }
        }
        else if(ch==2)
        {
            break;
        }
        else
        {
            printf("Invalid choice");
        }
       }while(ch!=2);
}
