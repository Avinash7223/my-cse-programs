#include<stdio.h>
#include<math.h>
int fact(int a,int b)
{
    int L;
    for(L=(a>b?a:b);L<=a*b;L++)

    if(L%a==0&&L%b==0)

     break;
    return L;
}

int main()

{

    int num1,num2;
    scanf("%d%d",&num1,&num2);
    fact(num1,num2);
    printf("%d",fact(num1,num2));
    return 0;

}
