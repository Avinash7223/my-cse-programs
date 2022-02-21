/*Input 1:
6
1 2 2 3 3 3
Output 1:
1
Input 2:
8
6 9 6 23 12 19 14 26
Output 2:
9 23 12 19 14 26*/
#include<stdio.h>
int main()
{
	int familymem[100],n,i,j,count=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&familymem[i]);
	}
	for(i=0;i<n;i++)
	{
		count=0;
		for(j=0;j<n;j++)
		{
		if(familymem[i]==familymem[j])
		count=count+1;
		}
		if(count==0)
		printf("%d",familymem[i]);
	}
}
