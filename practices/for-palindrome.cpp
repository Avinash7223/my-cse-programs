/*2. Check whether a number is palindrome or not.*/
#include<stdio.h>
int main()
{
	int num,orig,rmd,sum=0,i=0;
	printf("Enter the number:");
	scanf("%d",&num);
	orig=num;
	for(i=0;i<num;num=num/10)
	{
		rmd=num%10;
		sum=(sum*10)+rmd;
		
	}
	if(orig==sum)
	{
		printf("it is palindrome number %d",sum);
	}
	else
	{
		printf("It is not a palindrome %d",sum);
	}
}
