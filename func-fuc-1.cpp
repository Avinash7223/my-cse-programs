//1. Print even and odd numbers in a given range//

#include<stdio.h>
int oddeven(int,int);
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	oddeven(a,b);

}
int oddeven(int x,int n)
{
	int i;
	for(i=x;i<=n;i++)
	{
	 if(i%2 == 0)
	 {
	 	printf("even:%d\n",i);
	 }
	 
	else if(i%2!=0)
	 {
	 	printf("odd:%d\n",i);
	 }
	   
	}
}
