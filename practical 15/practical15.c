#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the number of second :");
    scanf("%d",&n);

    while(n>=0)
    {
        sleep(1);
        printf("%d\n\a",n);
        n--;
        if(n==0)
        {
            printf("Countdown completed!");
        }

    }
    printf("Second should be grater then O!!");

}
