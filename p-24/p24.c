#include<stdio.h>
int lenght(char n[])
{
    int c=0;
    while(n[c]!='\0')
    {
        c++;
    }
    return c;
}
int rev(char n1[],char n2[],int c1,int c2)
{
    printf("revrse name=");
    for(int i=c1; i>=0; i--)
    {
        printf("%c",n1[i]);
    }
    printf("\nrevrse name=");
    for(int j=c2; j>=0; j--)
    {
        printf("%c",n2[j]);
    }
}
int check(char name1[],char name2[])
{
    int diff;
    for(int i=0; name1[i]!='\0'|| name2[i]!='\0'; i++)
    {
        diff=name1[i]-name2[i];
    }
    if(diff==0)
    {
        printf("\nYes,Both are same");
    }
    else
    {
        printf("\nNo,Both are diffrent");
    }
}
int swap(char n1[],char n2[],char temp[])
{
    int i;
    for(i=0; n1[i]!='\0'; i++)
    {
        temp[i]=n1[i];
    }
    temp[i]='\0';
    for(i=0; n2[i]!='\0'; i++)
    {
        n1[i]=n2[i];
    }
    n1[i]='\0';
    for(i=0; temp[i]!='\0'; i++)
    {
        n2[i]=temp[i];
    }
    n2[i]='\0';
    printf("\n\nAfter swapping:\n");
    printf("name1=%s\n",n1);
    printf("name2=%s\n",n2);

}
int merge(char name1[],char name2[],int count1,int count2)
{
    int i=0;
    count1=lenght(name1);
    count2=lenght(name2);
    for(i=0; i<count2; i++)
    {
        name1[count1+i]=name2[i];
    }
    name1[count1+i]='\0';
    printf("\nMerged string:%s\n",name1);

}
int convertuppercase(char n[])
{
    int i;
    for(int i=0; n[i]!='\0'; i++)
    {
        if(n[i]>='a' && n[i]<='z')
        {
            n[i]=n[i]-32;
        }
    }

    printf("After changing case : %s\n",n);
}
int convertlowercase(char n[])
{
    int i;
    for(int i=0; n[i]!='\0'; i++)
    {
        if(n[i]>='A' && n[i]<='Z')
        {
            n[i]=n[i]+32;
        }
    }
    printf("After changing case : %s\n",n);
}
int firstupper(char n1[],char n2[])
{
    if(n1[0]>='a' && n1[0]<='z' )
    {
        n1[0]=n1[0]-32;
        printf("\ncapitalize 1st character of each word =%s",n1);
    }
    if(n2[0]>='a' && n2[0]<='z' )
    {
        n2[0]=n2[0]-32;
        printf("\ncapitalize 1st character of each word =%s",n2);
    }
}
int main()
{
    char name1[50],name2[50],temp[100],n1[50],n2[50];
    int count1,count2,diff,choice;
    printf("Enter 1st name :");
    scanf("%s",name1);
    for(int i; name1[i]!='\0'; i++)
    {
        n1[i]=name1[i];
        n1[i+1]='\0';
    }
    printf("\nEnter 2st name :");
    scanf("%s",name2);
    for(int i; name2[i]!='\0'; i++)
    {
        n2[i]=name2[i];
        n2[i+1]='\0';
    }
    do
    {
        printf("\n==============================");
        printf("\n String Operations Menu");
        printf("\n==============================");
        printf("\n1. Find Length");
        printf("\n2. Reverse Names");
        printf("\n3. Compare Names");
        printf("\n4. Swap Names");
        printf("\n5. Merge Names");
        printf("\n6. Convert to Uppercase");
        printf("\n7. Convert to Lowercase");
        printf("\n8. Capitalize First Letter");
        printf("\n9. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
        case 1:
            count1=lenght(name1);
            count2=lenght(name2);
            printf("\n1st name lenght %d",count1);
            printf("\n2st name lenght %d\n",count2);
            break;
        case 2:
            rev(name1,name2,count1,count2);
            break;

        case 3:
            check(name1,name2);
            break;
        case 4:
            swap(n1,n2,temp);
            break;
        case 5:
            int i;
            char temp1[100],temp2[100];
            for(i=0; name1[i]!='\0'; i++)
            {
                temp1[i]=name1[i];
            }
            temp1[i]='\0';
            for(i=0; name2[i]!='\0'; i++)
            {
                temp2[i]=name2[i];
            }
            temp2[i]='\0';
            merge(temp1,temp2,count1,count2);
            break;
        case 6:
            printf("\nconvweting case to Upper Case name 1:\n");
            convertuppercase(n1);
            printf("\nconvweting case to Upper Case name 2:\n");
            convertuppercase(n2);
            break;
        case 7:
            printf("\nconvweting case to lower Case name 1:\n");
            convertlowercase(n1);
            printf("\nconvweting case to lower Case name 2:\n");
            convertlowercase(n2);
            break;
        case 8:
            firstupper(n1,n2);
            break;

        }

    }
    while(choice != 9);

}
