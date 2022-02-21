/*Input:
K
4 4
5 5
Output:
Valid move for King
Input:
R
4 4
5 5
Output:
Invalid move for Rook*/
#include<stdio.h>
int main()
{
	char ch;
	int i,j,m,n;
	printf("Enter the character:");
	scanf("%c",&ch);
	printf("Enter 1st two digits of first position:");
	scanf("%d%d",&i,&j);
	printf("Enter 2nd two digits of second position:");
	scanf("%d%d",&m,&n);
	if(ch=='k'||ch=='K')
	{
		if(((i==m)||(i==m+1)||(i==m-1))&&((j==n)||(j==n+1)||(j==n-1)))
		{
			printf("Valid move for king");
		}
		else
		{
			printf("Not valid move for king");
		}
	}
	else if(ch=='R'||ch=='r')
	{
		if((i==m)||(j==n))
		{
			printf("Valid move for Rook");
		}
		else 
		{
			printf("Not valid move for Rook");
		}
	}
	else
	{
		printf("The given one is not Rook or king");
	}
}
