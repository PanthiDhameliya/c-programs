#include<stdio.h>
int main()
{
    int i;
    float km=0.0;

   while(i<20)
   {
        i++;
        km+=0.5;
        printf("\nMinute %d :  Distance covered = %.1f KM",i,km);
        if(km==10.0)
        {
            printf("\nMarathon complete!");
        }
   }

}
