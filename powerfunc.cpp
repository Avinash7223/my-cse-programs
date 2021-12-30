//Find power of a number//
#include<stdio.h>
#include<math.h>
int power(int);
int main()
{ 
	int i;
    scanf("%d",&i);
    power(i);    
}
int power(int n)
{
	int a,result;
	printf("enter the power:");
	scanf("%d",&a);
	result = pow(n,a);
	printf("result:%d",result);

}
