/*4. Given a two-dimensional array of integers and a row index, return the largest element in
that row*/

#include<stdio.h>
int main()
{
    int a[10][10],i,j,rows,element,max,lag;
    printf("enter number of rows and element:");
    scanf("%d%d",&rows,&element);
    printf("the row and element:\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<element;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     printf("enter the row:");
    scanf("%d",&lag);
    max = a[lag-1][0];
    for(i=1;i<element;i++)
    {
        if(max<a[lag-1][i])
        {
            max = a[lag-1][i];
        }
    }
    printf("largest element in that row %d are:%d",lag,max);
    
}
