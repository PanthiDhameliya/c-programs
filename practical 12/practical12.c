#include<stdio.h>
int main()
{
    int n;
    for(n=1;n<=50;n++)
    {
        printf("\nBOOK ID:%d",n);
        if(n%5==0)
        {
            printf("\nBOOk Id :%d is (Special Edition) ",n);
        }
    }
}
