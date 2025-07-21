#include<stdio.h>
void main()
{
    float weight,height,BMI;
    printf("enter your weight:");
    scanf("%f",&weight);
    printf("enter your height:");
    scanf("%f",&height);
    BMI=weight/(height*height);
    printf("Your Body mass Inex is =%f",BMI);

    if(BMI<18.5)
    {
        printf("\nYou are Under weight");
    }
    else if(BMI>=18.5 & BMI<24.9)
    {
        printf("\nyou are healthy");
    }
    else if(BMI>=25.0 & BMI<29.9)
    {
        printf("\nyou are overweight");
    }
    else if(BMI>=30.0 & BMI<39.9)
    {
        printf("\nyou are obesity");
    }
    else if(BMI>40)
    {
        printf("\nyou are severe obesity");
    }









}

