/*Input:
Mr. Kashyap!Hi! I am safe here.
Output:
>s?*?*Ww?}Wp[*^oho$ */
#include<stdio.h>
#include<string.h>
int main()
{
	char msg[100];
	int a,i,len;
	scanf("%[^\n]s",msg);
	len=strlen(msg);
	for(i=0;i<len;i++)
	{
		a=msg[i];
		if(i%2==0)
		{
			a=a-10;
		}
		else
		{
			a=a+10;
		}
		msg[i]=a;
	}
	printf("%s",msg);
}
