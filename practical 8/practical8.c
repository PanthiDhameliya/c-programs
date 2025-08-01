#include<stdio.h>
int main()
{
    int age;
    printf("Enter Your Age=");
    scanf("%d",&age);
    if(age<18 & age>0)
    {
        printf("Your not eligible to open a saving account ");
    }
    else if(age>18 & age<59)
    {
        printf("Your eligible to open a saving account");
    }
    else if(age>60)
    {
        printf("Your eligible to open a senior citizen account");
    }
    else
    {
        printf("Enter age is Invaid ");
    }
}

