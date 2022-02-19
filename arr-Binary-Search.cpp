/*6. Implement Binary Search Program*/
#include<stdio.h>

int main()
{
    int sroll[20],snum,key,i,first,last,middle;
    printf("Please enter the number of students:\n");
    scanf("%d",&snum);
    printf("Please enter the roll numbers of the students:\n");
    for(i=0;i<snum;i++)
    {
        scanf("%d",&sroll[i]);
    }
    printf("Please enter the student roll number whom you want to search:\n");
    scanf("%d",&key);
    first = 0;
    last = snum-1;
    middle = (first+last)/2;
    while(first<=last)
    {
        if(sroll[middle] == key)
        {
            printf("The element is found in position %d",middle);
            break;
        }
        else if(sroll[middle]>key)
        {
            last = middle-1;
        }
        else
        {
            first = middle+1;
        }
        middle = (first+last)/2;
    }
    if(first>last)
    {
        printf("The roll number you are searching for is not present in the array!!");
    }
    
    
}
