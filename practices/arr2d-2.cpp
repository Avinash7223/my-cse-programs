//2. Find transpose of a matrix


#include<stdio.h>
int main()
{
    int a[10][10],i,j,rows,cols;
    printf("enter the type of matrix:");
    scanf("%d%d",&rows,&cols);
    printf("\nenter the matrix:\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\ntranspose the matrix:\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
}
