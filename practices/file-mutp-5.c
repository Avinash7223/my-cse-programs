/*1. numbers.txt file is having all numbers from 1 to 100. Now read this file, 
find all the numbers which are multiples of 5 and send them to another file.*/
#include <stdio.h>
#include <stdlib.h>
int isMuty5(int n);

int main()
{  
    FILE * fPtrIn,
         * fPtrmuty5; 
		     
    int number,success;
    fPtrIn   = fopen("D:/c programs/number.txt", "r");
    fPtrmuty5 = fopen("multpi-of-5.txt" , "w");
   
    if(fPtrIn == NULL || fPtrmuty5 == NULL )
    {  
        printf("Unable to open file.\n");
        printf("Please check whether file exists and you have read/write privilege.\n");
        exit(EXIT_FAILURE);
    }
    printf("File opened successfully. Reading integers from file.\n");
  
    while (fscanf(fPtrIn, "%d", &number) != -1)
    {              
        if(isMuty5(number)!=1)
        {        
        fprintf(fPtrmuty5, "%d\n", number);
    	}         

    }
    fclose(fPtrIn);
    fclose(fPtrmuty5);
    printf("Data written to files successfully.");
    return 0;
}
int isMuty5(int n)
{
    if(n%5==0)
    {
    	return n;
	}
	else
	{
		return 1;
	}
}

