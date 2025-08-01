#include<stdio.h>
#define Child_Age 12
#define Senior_Age 60
#define Max_Age 120
#define Adult_Ticket 200
int main()
{
    int n,age,i;
    int totalcost=0,adultcount=0;
    printf("Enter the Number of Visitors=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("\n\nEnter age of visitors %d=",i);
        scanf("%d",&age);
        if(age<0 | age>Max_Age)
        {
                printf("Error:Invaid Age is Enter\n");
                i--;
                continue;
        }
        if(age<Child_Age)
        {
            printf("Visitors %d is child.Entry is free.\n",i);
        }
        else if(age>=Senior_Age)
        {
            printf("Visitors %d is Senior citizen.Entry is free.\n",i);
        }
        else
        {
            printf("\nVisitor %d is an adult.\nTicket price=%d",i,Adult_Ticket);
            totalcost+=Adult_Ticket;
            adultcount++;

        }
        if(adultcount>=5)
        {
            printf("\n\n\nGroup discount appied:10 percentages off on adults\n ");
            totalcost*=0.90;
        }

    }

    printf("\n\ntotal ticket cost= %d\n",totalcost);

}

