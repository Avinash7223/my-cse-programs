/*Section 1:
20 32 45
78 12 25
Student 1 average 32.3
Student 2 average 38.3
Section 1 class average = 35.3
Section 2:
42 65 89
90 89 90
Student 1 average 65.3
Student 2 average 89.6
Section 2 class average = 77.45
Students who need to attend Remedial classes:
Section 1 Student 1
Section 2 student 1*/
#include<stdio.h> 
int main()
{
    int sectionMarks[5][5][5],i,j,k,sections,students,subjects,sectionTotal,avg[5][5],avge[5],min,sumavg;
    
    printf("Please enter number of sections:\n");
    scanf("%d",&sections);
    
    printf("Please enter number of students:\n");
    scanf("%d",&students);
    
    printf("Please enter number of subjects:\n");
    scanf("%d",&subjects);
    
    for(i=0;i<sections;i++)
    {
        printf("section%d:\n",i);
        
        for(j=0;j<students;j++)
        {
            
            for(k=0;k<subjects;k++)
            {
                scanf("%d",&sectionMarks[i][j][k]);
            }
        }
    }
    
    for(i=0;i<sections;i++)
    {
        sectionTotal = 0;
        sumavg=0;
       
        for(j=0;j<students;j++)
        {
        	
        	sectionTotal=0;
           
            for(k=0;k<subjects;k++)
            {
                
                sectionTotal = sectionTotal+sectionMarks[i][j][k];
            }
              avg[i][j] = sectionTotal/(subjects);
            printf("Average marks of student %d is %d:",j,avg[i][j]);
            
            sumavg=sumavg+avg[i][j];
           
            printf("\n");
            
            
        }
          avge[i]= sumavg/(students);
            printf("Average marks of sections %d is %d:",i,avge[i]);
            printf("\n");
        
    }

    for(i=0;i<sections;i++)
    {
        for(j=0;j<students;j++)
        {
             if(avg[i][j]< avge[i])
             {
               
                 printf(" section %d student %d \n",i+1,j+1);
             }
        }
       
    }    
}
