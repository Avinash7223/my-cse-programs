/*9. Read n subject marks of a student in an array and display the number of subjects the student
passed and the number of subjects the student failed. (Pass : mark>=40; Fail: mark<40) */

#include<stdio.h>
int main()
{
	int smarks[100],sub,i;
	printf("enter number of subjects:");
	scanf("%d",&sub);
	for(i=0;i<sub;i++)
	{
		scanf("%d",&smarks[i]);
	}
	for(i=0;i<sub;i++)
	{
		if(smarks[i] >= 40)
		{
			printf("\nThe student has pass in %d subject because of  %d marks",i,smarks[i]);
		}
		else
		{
			printf("\nThe student has failed in %d subject beacuse of %d marks",i,smarks[i]);
		}
	}
}
