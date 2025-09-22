#include<stdio.h>
int main()
{
    int i,j,n,row,seat;
    char seats[5][10];
    for(i=0;i<5;i++)
    {
        for(j=0;j<10;j++)
        {
            seats[i][j]='o';
        }
    }
    printf("Enter the Number of reserved seats :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter row and seat number  for reserved seats %d (e.g 2 5):",i+1);
        scanf("%d %d",&row,&seat);
    if(row>=1 && row<=5 && seat>=1 && seat<=10)
    {
         seats[row-1][seat-1]='*';
    }
    else
    {
        printf("Invalid input !!!\n");
        i--;
    }
    }

    for(i=0;i<5;i++)
    {
        for(j=0;j<10;j++)
        {
            printf("%c",seats[i][j]);
        }
        printf("\n");
    }

}
