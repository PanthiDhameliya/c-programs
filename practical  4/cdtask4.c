#include<stdio.h>
int main()
{
    long long Population=1441981744;
    float Population_of_women_percentage=48.4;
    float Population_of_men_percentage =(100-48.4);
    float overall_literate_percentage =85.95;
    float literate_men_percentage =80.95;
    float literate_women_percentage=62.84;
    long long  Population_of_men=(Population*Population_of_men_percentage)/100;
    long long  Population_of_women=(Population*Population_of_women_percentage)/100;
    long long  Total_litarate_Population=(Population*overall_literate_percentage)/100;
    long long  literate_men=(literate_men_percentage*Population_of_men)/100;
    long long  literate_women=(literate_women_percentage*Population_of_women)/100;
    long long  illiterate_men=Population_of_men-literate_men;
    long long  illiterate_women=Population_of_women-literate_women;

    printf("\n Total Population in Bharat =%d",Population);
    printf("\n Total literate Population in Bharat =%d",Total_litarate_Population);
    printf("\n Population of men in Bharat=%d",Population_of_men);
    printf("\n Population of women in Bharat=%d",Population_of_women);
    printf("\n Number of Literate men in Bharat=%d",literate_men);
    printf("\n Number of Literate women in Bharat=%d",literate_women);
    printf("\n Number of Illiterate men in Bharat=%d",illiterate_men);
    printf("\n Number of Illiterate women in Bharat=%d",illiterate_women);
}





