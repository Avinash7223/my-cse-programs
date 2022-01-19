/*4. Print following patterns 
*             A           1
*             BB          2 3
* *           CCC         4 5 6
* * *         DDDD        7 8 9 10
* * * *       EEEEE                   */

#include<stdio.h>
int main()
{
	char ch,r,c;
	int i,j,n,num=0,x;
	printf("enter the number of rows for number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{    num=num+1;
			printf("%d",num);
		}
		printf("\n");
	}
	
	  printf("Enter number of rows for special char : ");
    scanf("%d",&x);
	for(i=1;i<=x;i++)
	{
		for(j=1;j<=i;j++)
		{    
			printf("*");
		}
		printf("\n");
	}
	
  printf("Enter last pyramid character : ");
  scanf(" %c",&ch);
  if(ch>='a' && ch<='z')
     ch=ch-32;
  for(r='A'; r<=ch; r++)
  {
     for(c='A'; c<=r; c++)
        printf("%c",r);
     printf("\n");
  }
	
	
}
