/*	Write a C function that determines whether a given number is an Armstrong number or not. Using recursive*/
#include<stdio.h>
#include<math.h>
int arm(int);
int main()
{
    int num;
    scanf("%d",&num);
    arm(num);
}
int arm(int num)
{
   int org, r, n = 0;
   float result = 0.0;


   org = num;

   for (org = num; num != 0; ++n)
   {
       num /= 10;
   }

   for (org = num; num != 0; num /= 10) {
       r = num % 10;

      result += pow(r, n);
   }

   if ((int)result == org)
    return printf("Armstrong number.");
   else
    return printf(" not an Armstrong number.");
   return 0;
}
