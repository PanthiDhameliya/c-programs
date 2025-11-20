#include <stdio.h>

int main(){
    FILE *fp=fopen("marks.dat","wb");
    FILE *err;
    if(!fp){
        err=fopen("error.log","w");
        fprintf(err,"File open error");
        fclose(err);
        return 0;
    }
    int n,roll,mark;
    printf("Enter number of students: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Roll Number: ");
        scanf("%d",&roll);
        printf("Marks: ");
        scanf("%d",&mark);
        putw(roll,fp);
        putw(mark,fp);
    }
    fclose(fp);

    fp=fopen("marks.dat","rb");
    if(!fp){
        err=fopen("error.log","w");
        fprintf(err,"Read error");
        fclose(err);
        return 0;
    }
    printf("\nStored Records:\n");
    int total=0,count=0;
    while(!feof(fp)){
        roll=getw(fp);
        if(feof(fp)) break;
        mark=getw(fp);
        printf("Roll: %d  Marks: %d\n",roll,mark);
        total+=mark;
        count++;
    }
    fclose(fp);

    printf("\nAverage Marks: %.2f\n",(float)total/count);

    int search;
    printf("Enter roll to search: ");
    scanf("%d",&search);

    fp=fopen("marks.dat","rb");
    while(!feof(fp)){
        roll=getw(fp);
        if(feof(fp)) break;
        mark=getw(fp);
        if(roll==search){
            printf("Found -> Marks: %d\n",mark);
            fclose(fp);
            return 0;
        }
    }
    printf("Not Found\n");
    fclose(fp);
}

