#include<stdio.h> 

int main()
{
    int sectionMarks[5][5][5],i,j,k,sections,students,subjects,sectionTotal,avg;
    
    printf("Please enter number of sections:\n");
    scanf("%d",&sections);
    
    printf("Please enter number of students:\n");
    scanf("%d",&students);
    
    printf("Please enter number of subjects:\n");
    scanf("%d",&subjects);
    
    for(i=0;i<sections;i++)
    {
        
        for(j=0;j<students;j++)
        {
            
            for(k=0;k<subjects;k++)
            {
                printf("Please enter subject %d marks of student %d section %d:\n",k,j,i);
                scanf("%d",&sectionMarks[i][j][k]);
            }
        }
    }
    
    for(i=0;i<sections;i++)
    {
        sectionTotal = 0;
        printf("*section %d marks:*\n",i);
        for(j=0;j<students;j++)
        {
            printf("* Marks for student %d *:\n",j);
            for(k=0;k<subjects;k++)
            {
                
                sectionTotal = sectionTotal+sectionMarks[i][j][k];
            }
            printf("\n");
            
        }
        avg = sectionTotal/(students*subjects);
        printf("Average marks of section %d is %d:",i,avg);
    }
    
}
