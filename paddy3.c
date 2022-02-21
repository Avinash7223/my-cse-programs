/*Input 1:
10 90 70 0
Output 1:
2
Input 2:
100 10 20 30 40 50 60 70 80 90 0
Output 2:
9*/
#include<stdio.h>
int main()
{
	int totalmarks[100],n,i,j,a;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&totalmarks[i]);
	}
		for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(totalmarks[i]<totalmarks[j])
			{
			a=totalmarks[i];
			totalmarks[i]=totalmarks[j];
			totalmarks[j]=a;
		    }
		}
	}
	printf("%d",totalmarks[1]);
}
