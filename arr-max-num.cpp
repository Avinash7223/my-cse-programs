#include<stdio.h>

int main()
{
    int weeklyPrograms[10][10],snum,weeks,sroll,max,i,j;
    printf("Please enter the number of students:\n");
    scanf("%d",&snum);
    printf("Please enter the number of weeks:\n");
    scanf("%d",&weeks);
    printf("Please enter weekly programs executed by students:\n");
    for(i=0;i<snum;i++)
    {
        for(j=0;j<weeks;j++)
        {
            scanf("%d",&weeklyPrograms[i][j]);
        }
    }
    printf("Please enter student roll number for whom you want to check maximum number of programs:");
    scanf("%d",&sroll);
    max = weeklyPrograms[sroll-1][0];
    for(i=1;i<weeks;i++)
    {
        if(max<weeklyPrograms[sroll-1][i])
        {
            max = weeklyPrograms[sroll-1][i];
        }
    }
    printf("Maximum number of programs done by student %d are:%d",sroll,max);
    
}
