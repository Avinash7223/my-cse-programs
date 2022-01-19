/*3. Write a C program to find whether a given number is perfect number or not.*/
#include<stdio.h>
int main()
{
	int i,num,org,sum=0;
	printf("Enter the number:");
	scanf("%d",&num);
	org=num;
	for(i=1;i<num;i++)
	{
		if(num%i==0)
		{
			sum=sum+i;
		}
	}
	if(org==sum)
	{
		printf("The given number is prefect number:%d",sum);
	}
	else
	{
		printf("The given number is not prefect number:%d",sum);
    }
}
