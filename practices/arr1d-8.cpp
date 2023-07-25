//8. Reverse the given string without using String handling functions.

#include<stdio.h>
#include<string.h>
int main()
{
    char name[30];
     int i,n;
    scanf("%[^\n]s",name);
    n=strlen(name);
    for(i=n-1;i>=0;i--)
    {
        printf("%c",name[i]);
    }
}



