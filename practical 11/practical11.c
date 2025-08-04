#include<stdio.h>
void main()
{
    int m;
    printf("Enter your Marks=");
    scanf("%d",&m);

    (m>=0 & m<=100)
        ?(m>=90)
            ?printf("\nGrade A")
            :(m>=80)
                ?printf("\nGrade B")
                :(m>=70)
                    ?printf("\nGrade c")
                    :(m>=60)
                        ?printf("\nGrade D")
                        :printf("\nFail")
        :printf("\nInvaild Marks");
}
