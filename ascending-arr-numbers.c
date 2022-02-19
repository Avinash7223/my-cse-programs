#include<stdio.h>
void ascending(int num[]);
int main()
{
    int num[5],i;
    
   for(i=0;i<5;i++)
   {
        scanf("%d",&num[i]);
   }
   ascending(num);
    
}
void ascending(int num[])
{
    int i,temp,j;
  
   for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(num[i]>num[j])
			{
				temp=num[i];
				num[i]=num[j];
				num[j]=temp;
			}
		}
	}
	printf("the given numbers in ascending order\n");
	for(i=0;i<5;i++)
	{
		printf("%d\n",num[i]);
	}
}
