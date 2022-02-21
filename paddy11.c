/*Input:
2 4 1
8
9
10
6
10
5
9
7
Output:
0 3
1 2*/
#include<stdio.h>
int main()
{
	int stu[10][10][10],i,j,k,m,n,o,count;
	printf("Enter number of sections:");
	scanf("%d",&m);
	printf("Enter number of students in each section:");
	scanf("%d",&n);
	printf("Enter marks of each student:");
	scanf("%d",&o);
	printf("Enter the marks of each student:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			for(k=0;k<o;k++)
			{
				scanf("%d",&stu[i][j][k]);
			}
		}
		printf("\n");
	}
	for(i=0;i<m;i++)
	{
		count=0;
		for(j=0;j<n;j++)
		{
			for(k=0;k<o;k++)
			{
				if(stu[i][j][k]>=8)
				{
					count=count+1;
				}
			}
		}
		printf("%d %d",i,count);
		printf("\n");
	}
}
