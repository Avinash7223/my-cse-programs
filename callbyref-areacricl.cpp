/*3.	Write a function which calculates area of a circle.*/

#include<stdio.h>
#include<math.h>
int cri(float*);
int main()
{
	float r,*p;
	printf("enter the radius:");
	scanf("%f",&r);
	p=&r;
	cri(p);
}
int cri(float *a)
{
	float pi=3.14,area;
    area=(pi)*pow(*a,2);
	printf("the area of the cricle:%f",area);
}
