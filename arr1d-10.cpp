/*10. Store salaries of n number of employees in an array. Calculate average salary paid by the
company. */
#include<stdio.h>
int main()
{
	int salary[1000],empl,i;
	float sum=0,avg;
	printf("enter the number of employees:");
	scanf("%d",&empl);
	for(i=0;i<empl;i++)
	{
		scanf("%d",&salary[i]);
	}
	for(i=0;i<empl;i++)
	{
		sum=sum+salary[i];
	}
	avg=sum/empl;
	printf("average salary paid by the company is %f",avg);
}
