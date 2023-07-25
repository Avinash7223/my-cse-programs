/*2.	Write a function which performs sum of two numbers*/
#include <stdio.h>
int addTwoNumbers(int *,int *);
 
int main()
{
   int a,b, sum;
   printf(" Input the first number : ");
   scanf("%ld", &a);
   printf(" Input the second  number : ");
   scanf("%ld", &b);   
   sum = addTwoNumbers(&a,&b);
   printf(" The sum of %ld and %ld  is %ld\n\n", a, b, sum);
   return 0;
}
int addTwoNumbers(int *n1,int *n2) 
{
   int sum;
   sum = *n1 + *n2;
   return sum;
}
