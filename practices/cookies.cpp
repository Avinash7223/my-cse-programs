#include<stdio.h>
#include<math.h>
int main()
{
    int day,cookies,sister;
    printf("enter the day:");
    scanf("%d",&day);
    cookies=pow(2,(day-1));
    printf("the total numbers of cookies  he get %d",cookies);
    sister=cookies/2;
    printf("\nthe number of cookies that sister get :%d",sister);
    return(0);
}
