#include <stdio.h>

int main()
{
    int *a,n,sum=0,rem;
    printf("enter the number:");
    scanf("%d",&n);
    a=&n;
    while(*a!=0)
    {
        rem=(*a)%10;
        sum=sum+rem;
        (*a)=(*a)/10;
    }
    printf("sum is:%d",sum);
    
    return 0;
    
}
