/*5.	A company decided to give 10% of the salary as bonus. Given the salary as input,
 write a function which calculates bonus.*/
 
#include<stdio.h>
int sala(int*);
int main()
{
	int salary,*sa;
	printf("enter the salary:");
	scanf("%d",&salary);
	sa=&salary;
	sala(sa);	
}
int sala(int *sa)
{
	int bou,total;
	bou=*sa/10;
	printf("Bonus amount is:%d",bou);
	total=*sa+bou;
	printf("\ntotal salary:%d",total);
}
