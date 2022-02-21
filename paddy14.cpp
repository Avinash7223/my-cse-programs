/*t. If the selected one is not present in the list, display it as ‘Unique Name.’ Else display
‘Common Name.’
Input 1:
5
Roopa
Rami
Rani
Roja
Rahul
Rohit
Output 1:
Unique Name*/
#include <stdio.h>  
#include<string.h>  
int main()  
{  
   char str[100][100]; 
   int value,n,i,j; 
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
    scanf("%s",str[i]);  
   }
    for(i=0;i<n;i++)
   {
       for(j=i+1;j<n;j++)
       {
          value=strcmp(str[i],str[j]);  
          if(value==0)  
           {
              printf("common name");
              value=0;
             break;
           }
          
       }
   }
   if(value>0)
   {
       printf("unique name");
   }
   return 0;  
}
