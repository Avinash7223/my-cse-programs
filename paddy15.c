/*Example:
Hi, How are you? My mail id is this:abc@gmail.com
Output:
HiHowareyouMymailidisthisabcgmailcom*/
#include<stdio.h>
int main()
{
	char str[50];
	int i=0,j=0;
	fgets(str,sizeof(str),stdin);
	while (str[i])
	{
		if (str[i] !=' ')
          str[j++] = str[i];
		i++;
	}
	str[j] = '\0';
	printf("%s",str);
	
	return 0;
}
