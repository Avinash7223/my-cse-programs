#include<stdio.h>
void ascending(int num[],int n);
int main()
{
    int num[100],i,n;
    
    printf("enter the number of numbers:");
	scanf("%d",&n);    
   for(i=0;i<n;i++)
   {
        scanf("%d",&num[i]);
   }
   ascending(num,n);
    
}
void ascending(int num[],int n)
{
    int i,temp,j;
  
   for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(num[i]>num[j])
			{
				temp=num[i];
				num[i]=num[j];
				num[j]=temp;
			}
		}
	}
	printf("\nthe given numbers in ascending order\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",num[i]);
	}
}
