/*Input
4 6
11 12 13 14 15 16
21 22 23 24 25 26
31 32 33 34 35 36
41 42 43 44 45 46
0 5
Output:
16 12 13 14 15 11
26 22 23 24 25 21
36 32 33 34 35 31
46 42 43 44 45 41 */
#include<stdio.h>

int main()
{
    int a[10][10],i,j,rows,cols,c1,c2,temp=0;
    printf("Enter the row and columns:");
    scanf("%d%d",&rows,&cols);
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the columns that to be swaped");
     scanf("%d%d",&c1,&c2);
    
    for(i=0;i<rows;i++)
    {
        temp=a[i][c1];
        a[i][c1]=a[i][c2];
        a[i][c2] = temp;
    }
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
}

