/*Input:
5
1 2 3 2 3
Output:
2
*/
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
		for(j=i+1;j<n;j++)
		{
		if(familymem[i]==familymem[j])
		count=count+1;
		}
	}
	printf("%d",count);
}
