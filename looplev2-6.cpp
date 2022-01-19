//6. Generate first n numbers in the Fibonacci series //

#include <stdio.h>
int main()
 {
  int t1=0,t2=1,res=0,n,i;
  printf("Enter a positive number: ");
  scanf("%d",&n);

  printf("Fibonacci Series: %d, %d,",t1,t2);
  res=t1+t2;

  for(res=res;res<=n;res++) 
  {
    printf("%d,",res);
    t1=t2;
    t2=res;
    res=t1+t2;
  }
}
