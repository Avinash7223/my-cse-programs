//7. Count total number of vowels and consonants in a string.
#include<stdio.h>
#include<string.h>

int main()
{
    char name[100];
    int i,n,sum=0;
    printf("Enter the name:");
    scanf("%s",name);
    printf(" name:%s",name);
     n=strlen(name);
  for(i=0;i<n;i++)
  {
      if(name[i]=='a')
      {
          sum=sum+1;
      }
       else if(name[i]=='e')
      {
          sum=sum+1;
      }
       else if(name[i]=='i')
      {
          sum=sum+1;
      }
       else if(name[i]=='o')
      {
          sum=sum+1;
      }
       else if(name[i]=='u')
      {
          sum=sum+1;
      }
      
      
  }
   printf("\nThe number of vowels:%d",sum);
   printf("\nThe number of consonants:%d",n-sum);
    
}
