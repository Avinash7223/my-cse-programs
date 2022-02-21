/* sum of the individual sum of all elements in matix and sum the different matix*/

#include<stdio.h>

int main()
{
    int a[5][5],i,j,k,rows,cols,r,max;
    printf("Enter the r,rows,cols:");
    scanf("%d%d%d",&r,&rows,&cols);
   for(k=0;k<r;k++)
   {
       printf("\n%d\n",k);
        for(i=0;i<rows;i++)
        {
             for(j=0;j<cols;j++)
             {
                scanf("%d",&a[i][j]);
              }
         }
        
   }
    for(k=0;k<r;k++)
    {
        for(i=0;i<rows;i++)
         {
             for(j=0;j<cols;j++)
             {
                max=max+a[i][j];
             }
         }
    }
   
   
    printf("\n%d",max);
}

