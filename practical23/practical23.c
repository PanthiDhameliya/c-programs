#include<stdio.h>
int main()
{
    int a[100],i,max=0,min=a[0],n,maxprofit;
    printf("Enter number of days=");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
            printf("Enter the price of day %d =",i+1);
            scanf("%d",&a[i]);
            if(a[i]<min)
            {
                min=a[i];
            }
            else
            {
                int profit=a[i]-min;
                if(profit>max)
                {
                    max=profit;
                }
            }

    }
    printf("\nmax profit=%d",max);

}
