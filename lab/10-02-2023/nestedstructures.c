#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct subject
{
    char name[100];
    int mark;
    //char grade;
};

struct student
{
    char name[1000];
    char RNo[1000];
    struct subject sub[10];
};

int main()
{
    int i,j;
    struct student st[90];
    char sname[100]="stud";
    char roll[100]="roll";
    char subname[100]="sub";
    int total=0;
   for(i=0;i<90;i++)
   {
       sprintf(sname,"student %d",i);
       strcpy(st[i].name,sname);
       sprintf(roll,"Roll %d",i);
       strcpy(st[i].RNo,roll);
       for(j=0;j<5;j++)
       {
           sprintf(subname,"subject %d",j);
           strcpy(st[i].sub[j].name,subname);
           st[i].sub[j].mark=rand()%100;
       }
   }

//    for(i=0;i<90;i++)
//    {
//        printf("%s   %s:\t",st[i].RNo,st[i].name);
//        for(j=0;j<5;j++)
//        {
//            printf("%s  %d\t",st[i].sub[j].name,st[i].sub[j].mark);
//        }
//        printf("\n");
//    }

	
//    printf("Roll No.   Name   Total marks    Parcentage\n");

//   for(i=0;i<90;i++)
//    {
//        for(j=0;j<5;j++)
//        {
//            total=total+st[i].sub[j].mark;
//        }
// 	printf("%s\t%s\t%d\t%.2f:\t",st[i].RNo,st[i].name,total,(total/500.0)*100.0);
// 	total=0;
//        printf("\n");
//    }

    for(int i=0;i<5;i++){
        int sum=0;
        for(int j=0;j<90;j++)
        {
            sum+=st[j].sub[i].mark;
        }
        printf("%s:%d\n",st[0].sub[i].name,sum);
    }


    return 0;
}

