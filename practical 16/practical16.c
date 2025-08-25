#include<stdio.h>
int main()
{
    int matchsticks=21,usermatchstick;
        printf("\n=====Rules======\n");
        printf("1.The user is asked to pick 1, 2, 3, or 4 matchsticks\n");
        printf("2.After the user picks, the computer makes its pick\n");
        printf("3.The player who is forced to pick the last matchstick loses the game\n");
    while(matchsticks>1)
    {
        printf("\npick the  number of matchsticks between(1-4): ");
        scanf("%d",&usermatchstick);
        if(usermatchstick<5)
        {
        printf("computer pick %d  matchsticks\n",5-usermatchstick);
        matchsticks-=5;
        printf("Matchsticks left : %d\n",matchsticks);
        }
        else
        {
             printf("Invalid Choice\n");
        }
        if(matchsticks==1)
        {
            printf("\nonly one matchsticks is left");
            printf("You Lose!!!");
        }


}
}
