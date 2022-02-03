//Check whether a number is prime, Armstrong or perfect number using functions//

#include<stdio.h>
int prime(int);
int prefect(int);
int armstrong(int);
int main()
{
	int num;
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
int arm(int num)
{
    int di=0,org,sum=0,n,result=0,number;
    
    org=num;
    number=num;
    while(num!=0)
    {
    
        di=di+1;
        num=num/10;
    }
   
    while(org>0)
    {
        n = org % 10;
        
        result =result+pow(n,di);
        sum=sum+n;
        
        
        org=org/10;
    }
    
   if (result == number)
    printf("Armstrong number");
   else
    printf("Not an Armstrong number");
}
