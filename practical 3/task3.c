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


}

