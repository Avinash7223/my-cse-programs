/*Input 1: Brain Drain is defined as the emigration or migration of individuals of talents and skills from
developing or under-developed countries to developed ones. It means impoverishment of
intellectuals, professionals, and technical resources of one country and enriching another. It is also
known as the mass departure of skillful resources from a country. It brings a potential economic
decline to the nation.
100
200
Output:
61
0
*/
#include<stdio.h>
#include<string.h>
int main()
{
	char ess[500];
	int len,ma,mi,count=0,i;
	scanf("%d %d",&ma,&mi);
	scanf("%[^\n]s",ess);
	len=strlen(ess);
	for(i=0;len>i;i++)
	{
		if(ess[i]==' '||'  ')
		count=count+1;
	}
	printf("%d",count);
}
