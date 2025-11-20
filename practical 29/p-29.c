#include<stdio.h>
#include<string.h>
int teamcount=0;
struct Couch
{
    char name[75];
    int age;
    int experience;
};
struct Team
{
    char teamname[75];
    char sportname[75];
    struct Couch couch;

};

struct Team teams[50];
int addteam()
{
    struct Team t;
    printf("\nEnter Team Name:");
    getchar();
    gets(t.teamname);
    printf("\nEnter sport Name:");
    gets(t.sportname);
    printf("\nEnter couch Name:");
    gets(t.couch.name);
    printf("\nEnter couch age:");
    scanf("%d",&t.couch.age);
    printf("\nEnter couch experience:");
    scanf("%d",&t.couch.experience);
    teams[teamcount++]=t;
}
int displayteam()
{
    if(teamcount==0)
    {
        printf("\nNo teams to display");
    }
    printf("\n===================Teams List====================\n");
    for(int i=0; i<teamcount; i++)
    {
        printf("\nTeam Name:%s",teams[i].teamname);

        printf("\nsport Name:%s",teams[i].sportname);

        printf("\ncouch Name:%s",teams[i].couch.name);

        printf("\ncouch age:%d",teams[i].couch.age);

        printf("\n couch experience:%d",teams[i].couch.experience);
        printf("\n===================================================");
    }

}
int searchteam()
{
    char search[50];
    int found=0;
    printf("\nEnter  the Team or sport name:");
    getchar();
    gets(search);
    for(int i=0; i<teamcount; i++)
    {

        if(strcmp(teams[i].teamname,search)==0 || strcmp(teams[i].sportname,search)==0 )
        {
            printf("\nTeam found!!");
            printf("\nTeam Name:%s",teams[i].teamname);

            printf("\nsport Name:%s",teams[i].sportname);

            printf("\ncouch Name:%s",teams[i].couch.name);

            printf("\ncouch age:%d",teams[i].couch.age);

            printf("\n couch experience:%d",teams[i].couch.experience);
            found=1;

        }
    }
    if(!found)
    {
        printf("\nTeam not found!!");
    }
}
int edit()
{
    char name[50];
    printf("\nEnter team name to edit:");
    getchar();
    gets(name);
    for(int i=0; i<teamcount; i++)
    {

        if(strcmp(teams[i].teamname,name)==0)
        {
            printf("\nTeam found!!");
            printf("\nediting record for %s",teams[i].teamname);

            printf("\nsport new  Name:");
            gets(teams[i].sportname);

            printf("\ncouch new Name:");
            gets(teams[i].couch.name);

            printf("\ncouch new  age:");
            scanf("%d",&teams[i].couch.age);

            printf("\n couch new experience :");
            scanf("%d",&teams[i].couch.experience);

        }
        else
        {
            printf("\nTeam not found!!");
        }

    }

}
int deleteTeam()
{
    char name[50];
    printf("\nEnter team name to delete:");
    getchar();
    gets(name);
    for(int i=0; i<teamcount; i++)
    {

        if(strcmp(teams[i].teamname,name)==0)
        {
            for(int j=i; j<=teamcount-1; j++)
            {
                teams[j]=teams[j+1];
            }
            teamcount--;
        }
        else
        {
            printf("Team is not found!!!");
        }
    }
    printf("\nTeams is sucuessfully deleated");
}
int sortTeam()
{
    struct Team temp;
    for(int i=0; i<teamcount-1; i++)
    {
        for(int j=i+1; j<=teamcount; j++)
        {
            if(teams[i].couch.experience<teams[j].couch.experience)
            {
                temp=teams[i];
                teams[i]=teams[j];
                teams[j]=temp;
            }

        }

    }
    printf("\nTeams sort by coach Experience(Descending):\n");
    displayteam();

}
int main()
{
        printf("\n====================================");
        printf("\n SPORTS TEAM MANAGEMENT SYSTEM");
        printf("\n====================================\n");



                  printf("\n1. Add Team Record");
                  printf("\n2. Display All Teams");
                  printf("\n3. Search Team");
                  printf("\n4. Edit Team/Information");
                  printf("\n5. Delete Team Record");
                  printf("\n6. Sort Teams (by CoachExperience)");
                  printf("\n7. Exit");

                  int ch;
                  do
    {
        printf("\nEnter your Choice :");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            addteam();
            break;
        case 2:
            displayteam();
            break;
        case 3:
            searchteam();
            break;
        case 4:
            edit();
            break;
        case 5:
            deleteTeam();
            break;
        case 6:
            sortTeam();
            break;
        }

    }
    while(ch!=7);
}
