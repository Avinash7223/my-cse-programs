/*3. Implement Linear Search*/
#include<stdio.h>
int main()
{
	int num[100],n,i,number;
	printf("enter the number of elements:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",& num[i]);
	}
	printf("enter the wanted number:");
	scanf("%d",&number);
	for(i=0;i<n;i++)
	{
		if(num[i]==number)
		{
			printf("the number %d and it location %d",num[i],i+1);
			break;
		}
	}
	if(num[i]==n)
	{
		printf("the given number is not there");
	}
}

