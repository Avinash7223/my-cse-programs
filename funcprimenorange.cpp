#include<stdio.h>
int prime(int);
int main()
{ 
    int a,b,i;
    scanf("%d%d",&a,&b);
    
    for(i=a;i<=b;i++)
    {
        if(prime(i))
        {
            printf("%d",i);
        }
    }
        
}
int prime(int n)
{ 
    int flag=0,i;
    
    if(n==2)
    {
        return 1;
    }
    else if(n%2==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 0;
    }
    else
    {
        for(i=3;i<=(n/2);i=i+2)
        {
            if(n%i==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
}
