/*5. Check whether a number is prime, Armstrong or perfect number 
using functions.*/

#include<stdio.h>
int prime(int);
int prefect(int);
int armstrong(int);
int main()
{
	int num;
	printf("Enter the number:");
	scanf("%d",&num);
    prime(num);
    prefect(num);
    armstrong(num);
		
}
int prime(int n)
{
	int flag=0,i;
	if(n==2)
	{
		printf("it is prime nuumber\n");
	}
	else if(n%2==0)
	{
		printf("it is not prime number\n");
	}
	else
	{
		for(i=3;i<=n/2;i=i+2)
		{
			if(n%i==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
		{
			printf("not a prime number\n");
		}
		else if(flag==0)
		{
			printf("prime number\n");
		}
	}
}
int prefect( int numb)
{
	int i,sum=0,rem;
    for(i = 1; i < numb; i++)  
       {  
            rem = numb % i;  
             if (rem == 0)  
             {  
               sum = sum + i;  
             }  
        }  
		if(sum == numb)  
           printf("  is a Perfect Number\n");  
        else  
          printf(" is not a Perfect Number\n");  

}
int armstrong(int n)
{
	int r,sum=0,org=n;   
    while(n>0)    
		{    
			r=n%10;    
			sum=sum+(r*r*r);    
			n=n/10;    
		}    
		if(org==sum)    
			printf("armstrong  number ");    
		else    
			printf("not armstrong number");  
}
