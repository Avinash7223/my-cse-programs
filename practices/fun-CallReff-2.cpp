/*2. Find the sum of digits of a number. Number must be passed to a
function using pointers*/

#include<stdio.h>
int sum(int*);
int main()
{
	int num,*a;
	scanf("%d",&num);
	a=&num;
	sum(a);
	
}
int sum(int *a)
{
	int rem,sum=0;
	  while(*a!=0)
    {
        rem=(*a)%10;
        sum=sum+rem;
        (*a)=(*a)/10;
    }
    printf("sum is:%d",sum);
    
}
