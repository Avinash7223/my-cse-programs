/*4.Write a function which calculates perimeter of triangle when three sides are given.*/

#include<stdio.h>
int per(int*,int*,int*);
int main()
{
	int side1,side2,side3,*s1,*s2,*s3;
	printf("enter length of side1:");
	scanf("%d",&side1);
	printf("enter length of side2:");
	scanf("%d",&side2);
	printf("enter length of side3:");
	scanf("%d",&side3);
	s1=&side1;
	s2=&side2;
	s3=&side3;
	per(s1,s2,s3);
	
}
int per(int *x,int*y,int*z)
{
	
	int peri;
	peri=*x+*y+*z;
	printf("perimeter of triangle:%d",peri);
}
