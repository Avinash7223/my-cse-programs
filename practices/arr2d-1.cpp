// 1. Write a program to add two matrices and display the result
#include<stdio.h>
int main()
{
    int i,j,rows,cols,a[10][10],b[10][10],s[10][10];
    printf("Enter number of rows and columbs:");
    scanf("%d%d",&rows,&cols);
   
    printf("\nenter the  first matrix:\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the second matrix:\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("the sum of two matrixs \n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            s[i][j]=a[i][j]+b[i][j];
            printf("%d ",s[i][j]);
        }
        printf("\n");
    }
    
}
