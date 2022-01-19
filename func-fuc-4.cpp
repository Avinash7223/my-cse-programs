//To print all strong numbers between given interval using functions.//
#include<stdio.h>
int factor(int);
void strong(int);
int main()
{
	int number;
	scanf("%d",&number);
	
	factor(number);
	strong(number);
}
int factor(int n)
{
	int i,fact=1;
	for(i=2;i<=n;i++)
	{
		fact=fact*i;
	}
	return fact;
}
void strong(int num)
{
	int digit,sum=0,original=num;
	while(num>0)
	{
		digit=num%10;
		sum=sum+factor(digit);
		num=num/10;
		
	}
	if(sum==original)
	{
		printf("it is prefect number");
		
	}
	else
	{
		printf("it is not a prefect number");
	}
		
}
