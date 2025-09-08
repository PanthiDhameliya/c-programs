#include<stdio.h>
int  main()
{
   int a1[10]={1,2,3,4,5,6,7,8,9,10},a2[100],n,i,j,f=0;

   for(i=0;i<10;i++)
   {
        printf("\nEnter the Id : ");
        scanf("%d",&a2[i]);
   }

   for(i=0;i<10;i++)
   {
      for(j=0;j<10;j++)
      {
         if(a1[i]==a2[j])
         {
              f++;
         }
      }

   }
   if(f==10)
   {
       printf("all are matching");
   }
   else
    {
        printf("%d are not matching",10-f);
    }

}
