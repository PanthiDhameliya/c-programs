#include<stdio.h>
int main()
{
    int num[25],pse=0,nte=0,pso=0,nto=0;
    int i;
    for(i=0;i<10;i++)
    {
        printf("\nEnter Number number[%d] : ",i);
        scanf("%d",&num[i]);
        if(num[i]==0)
        {
            i--;
            printf("0 is Invalid\n");
            continue;
        }
        if(num[i]>0 && num[i]%2==0)
            pse++;
        else if(num[i]>0 && num[i]%2!=0)
            pso++;
        else if(num[i]<0 && num[i]%2==0)
            nte++;
        else
            nto++;

    }
    printf("\n======Result=====\n");
    printf("Total positive and even number = %d\n",pse);
    printf("Total positive and odd number = %d\n",pso);
    printf("Total negative and even number = %d\n",nte);
    printf("Total negative and odd number = %d\n",nto);

}
