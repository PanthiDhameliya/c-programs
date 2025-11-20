#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int swap(float *a,float *b)
{
    float temp= *a;
    *a= *b;
    *b= temp;


}
int nameswap(char a[50],char b[50])
{
    char temp[50];
    strcpy(temp,a);
    strcpy(a,b);
    strcpy(b,temp);

}
int selectionshort(float *prices,char name[][50],int n,int ascending)
{
    for(int i=0;i<n-1;i++)
    {
        int pos=i;
        for(int j=i+1;j<n;j++)
        {
            if((ascending && *(prices+j)<*(prices+pos)) || (!ascending && *(prices+j)>*(prices+pos)))
            {
                    pos=j;
            }
        }
         if(pos!=i)
            {
                swap(prices+i,prices+pos);
                nameswap(name[i],name[pos]);
            }
    }
}

int main()
{
    int ascending,n;
    printf("\nEnter Number of team:");
    scanf("%d",&n);
    char name[n][50];
    float *prices=(float*)malloc(n*sizeof(float));
    //inputs
    for(int i=0;i<n;i++)
    {
        printf("\nEnter name of items :");
        getchar();
        gets(name[i]);
        printf("\Enter price of items :");
        scanf("%f",(prices+i));

    }
     printf("\nEnter 1 for ascending or 0 for descending :");
    scanf("%d",&ascending);
    selectionshort(prices,name,n,ascending);
    for(int i=0;i<n;i++)
    {
        printf("\n%s : %.2f",name[i],prices[i]);
    }
}
