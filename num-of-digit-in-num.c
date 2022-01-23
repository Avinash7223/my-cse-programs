#include<stdio.h>
int sum(int);
int main()
{
    int num;
    scanf("%d",&num);
    sum(num);
}
int sum(int n)
{
    int sum=0,i;
    while(n!=0)
    {
        n=n/10;
        ++sum;
        
    }
    printf("%d",sum);
    return sum;
}
