#include<stdio.h>
#include<math.h>
void input();
void valid(float a,float b,float c);
void area(float a,float b,float c);
int main()
{
    input();
}
void input()
{
    float  a,b,c;
    printf("\nEnter value of 1st side of the triangle:");
    scanf("%f",&a);
    printf("\nEnter value of 2st side of the triangle:");
    scanf("%f",&b);
    printf("\nEnter value of 1st side of the triangle:");
    scanf("%f",&c);
    valid(a,b,c);

}
void valid(float a,float b,float c)
{
    if(a<=0 || b<=0 ||c<=0)
    {
        printf("\nInValid Triangle\n");
    }
    else if((a+b>c) && (c+b>a) && (a+c>b))
    {
         printf("\nValid Triangle\n");
         area(a,b,c);
    }
    else
    {
         printf("\nInValid Triangle\n");

    }
}
void area(float a,float b,float c)
{
    float s,A;
    s=(a+b+c)/2.0;
    printf("\nperameter=%.2f\n",s);
    A=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("\narea=%.2f\n",A);
}
