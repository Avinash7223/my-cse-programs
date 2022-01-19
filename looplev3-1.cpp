/*Given an integer n, print the sum 1!+2!+3!+...+n!1!+2!+3!+...+n!. (This problem has a 
solution with only one loop, so try to discover it.)*/

#include<stdio.h>
int main()
{
	int i,j,n,fact=1,sum=0;
	printf("Enter the number");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
		printf("fact:%d\t",fact);
	   sum=sum+fact;
	   printf("sum:%d\n",sum);
	}
	printf("Total sum: %d",sum);
}
