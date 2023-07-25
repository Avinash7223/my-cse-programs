//5. Sort an array in ascending order.
#include<stdio.h>
int main()
{
	int num[100],n,i,j,temp;
	printf("enter number of elements:");
	scanf("%d",&n);
	printf("enter the numbers:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(num[i]>num[j])
			{
				temp=num[i];
				num[i]=num[j];
				num[j]=temp;
			}
		}
	}
	printf("the given numbers in ascending order\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",num[i]);
	}
}

