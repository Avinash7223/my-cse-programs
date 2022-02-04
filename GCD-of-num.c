#include <stdio.h>
int gcd(int num1,int num2)
{
    int min,hcf,i;
     if(num1<num2)
    {
        min=num1;
    }
    else
    {
        min=num2;
    }

    for(i=1; i<=min; i++)
    {
        
        if(num1%i==0 && num2%i==0)
        {
            hcf = i;
        }
    }
    return hcf;
    

}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d",gcd(a,b));
}
