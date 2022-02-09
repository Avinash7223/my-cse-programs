 //2. Write a program to find maximum of n elements in an array.
#include<stdio.h>
int main()
{
	int element[100],num,i,max;
	printf("enter the number of elements:");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		scanf("%d",& element[i]);
	}
	max=element[0];
	for(i=1;i<num;i++)
	{
		if(max<element[i])
		{
			max=element[i];
		}
	}
	printf("the maximum number is %d",max);
	
}
