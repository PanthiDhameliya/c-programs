#include<stdio.h>
int main()
{
    int i,j,n1,n2;
    printf("Enter The size of table vertically :");
    scanf("%d",&n1);
    printf("Enter The size of table horizontally :");
    scanf("%d",&n2);
    for(i=1;i<=n1;i++)
    {
        for(j=1;j<=n2;j++)
        {
           printf("\t%d",i*j);
        }
        printf("\n");
    }
}
