#include<stdio.h>
int main()
{
    int Total_amount,dis,amount;
    printf("Enter Total amount in rupees=");
    scanf("%d",&amount);
    if(amount<=1000)
    {
       printf("No Discount is applied");
    }
    else if(amount>=1000 & amount<=5000)
    {
            dis=amount*10/100;
            Total_amount=amount-dis;
            printf("\n10 %% Discount is applied on your shopping");
            printf("\nTotal amount to paid =%d",Total_amount);
    }
    else if(amount>=5000)
    {
            dis=amount*20/100;
            Total_amount=amount-dis;
            printf("\n20 %% Discount is applied on your shopping");
            printf("\nTotal amount to paid = %d",Total_amount);
    }
}
