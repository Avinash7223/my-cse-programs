#include<stdio.h>
int main()
{
	int count=0,n,i,num,flag;
	scanf("%d",&n);
	if(n==1)
	{
		printf("%d\n",2);
	}
	else if(n<1)
	{
		printf("Not valid");
	}
	else
	{
		printf("%d\n",2);
		count=1;num=3;
		while(count<n)
		{
			flag=0;
			for(i=3;i<=num/2;i=i+2)
			{
				if(num%i==0)
				flag=1;
			}
			if(flag==0)
			{
				count=count+1;
				printf("%d\n",num);
			}
			num=num+2;
		}
		
	}
}
