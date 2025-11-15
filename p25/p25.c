#include<stdio.h>
#include<string.h>
#include<time.h>
struct tm todayDate()
{
    time_t now =time(NULL);
    struct tm t=*localtime(&now);
    printf("Issued on : %02d-%02d-%04d\n",t.tm_mday,t.tm_mon+1,t.tm_year+1900);
    return t;
};
struct tm dueDate(struct tm issue)
{
    issue.tm_mday+=7;
    mktime(&issue);
    printf("Due on : %02d-%02d-%04d\n",issue.tm_mday,issue.tm_mon+1,issue.tm_year+1900);
    return issue;

};
struct tm getreturnData(struct tm issue)
{
    struct tm ret= {0};
    printf("\nEnter return date (DD MM YYYY)");
    scanf("%d %d %d", &ret.tm_mday, &ret.tm_mon, &ret.tm_year);
    ret.tm_mon -= 1;
    ret.tm_year -= 1900;

    mktime(&ret);
    return ret;

};
int daysBetween(struct tm start,struct tm end)
{
    struct tm s=start;
    struct tm e=end;
    s.tm_hour=e.tm_hour=0;
    s.tm_min=e.tm_min=0;
    s.tm_sec= e.tm_sec=0;

    end.tm_min=0;
    end.tm_sec=0;
    time_t t1=mktime(&s);
    time_t t2=mktime(&e);
    double diff=difftime(t2,t1)/(60*60*24);
    return (int)(diff+0.5);

}


int display(char name[50][50],int n)
{
    printf("\n=======list of the book==========");
    for(int i=1; i<=n; i++)
    {
        printf("\n%d.The Book Name :%s",i,name[i]);
    }

}
int available(char name[50][50],int n,char avail[100][50])
{
    int i;
    getchar();
    for(i=1; i<=n; i++)
    {
        printf("\n%d.The Book Name :%s",i,name[i]);
        printf("\nEnter yes for available and not for not available=");
        gets(avail[i]);
    }
    printf("| %-4s | %-25s | %-10s |","No","Name","available");
    printf("\n==================================================\n");
    for(int i=1; i<=n; i++)
    {
        printf("| %-4d | %-25s | %-10s |\n",i,name[i],avail[i]);
    }
    printf("\n===================================================\n");


}
int borrowbook(char name[50][50],char avail[100][50],int n)
{
    int choice;
    printf("\n======= Borrow a Book =======\n");
    printf("\nEnter the book number you want to borrow: ");
    scanf("%d", &choice);
    if(strcmp(avail[choice],"no")==0)
    {
        printf("Sorry, '%s' is already borrowed (not available).\n", name[choice]);
    }
    else
    {
        strcpy(avail[choice], "no");
        printf("You borrowed '%s' successfully.\n", name[choice]);
    }

}
int update(char name[50][50],char avail[100][50],int n)
{
    printf("| %-4s | %-25s | %-10s |","No","Name","available");
    printf("\n==================================================\n");
    for(int i=1; i<=n; i++)
    {
        printf("| %-4d | %-25s | %-10s |\n",i,name[i],avail[i]);
    }
    printf("\n===================================================\n");

}
int main()
{
    int n,i,ch;
    char name[50][50],avail[100][50];
    printf("\nEnter Book Total name of the Book :");
    scanf("%d",&n);
    getchar();
    for(i=1; i<=n; i++)
    {
        printf("\nEnter the Book Name %d:",i);
        gets(name[i]);

    }

    do
    {
        printf("\n\n========= MENU =========");
        printf("\n1. Show Book Table");
        printf("\n2. Set Availability");
        printf("\n3. Borrow a Book");
        printf("\n4. Upadated Table");
        printf("\n5. return book");
        printf("\n6. Exit");

        printf("\n\nEnter Your Choice");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            display(name,n);
            break;
        case 2:
            available(name,n,avail);
            break;
        case 3:
            borrowbook(name, avail, n);
            break;
        case 4:
            update(name, avail, n);
            break;
        case 5:
            struct tm issue=todayDate();
            struct tm due=dueDate(issue);
            struct tm ret=getreturnData(issue);
            int kept =daysBetween(issue,ret);
            printf("\nBook kept for %d day(s).\n",kept);
            if(kept>7)
            {
                int latedays=kept-7;
                int fine =latedays*10;

                printf("\nReturn %d days.\n",latedays);
                printf("\nFine Amount :rupees%d",fine);
            }
            else
            {
                printf("\nreturned on time");
            }

            break;
        case 6:
            printf("\nExit");
            break;
        default :
            printf("Invalid choice");
        }




    }
    while(ch!=6);


}
