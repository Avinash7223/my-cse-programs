#include <stdio.h>
#include <stdlib.h>
int isMuty5(int n);

int main()
{
   
    FILE * fPtrIn,
         * fPtrmuty5; 
		     
    int num,success;
    fPtrIn   = fopen("D:/c programs/number.txt", "r");
    fPtrmuty5 = fopen("multpi-of-5.txt" , "w");
   
    if(fPtrIn == NULL || fPtrmuty5 == NULL )
    {
   
        printf("Unable to open file.\n");
        printf("Please check whether file exists and you have read/write privilege.\n");
        exit(EXIT_FAILURE);
    }

    printf("File opened successfully. Reading integers from file. \n\n");

  
    while (fscanf(fPtrIn, "%d", &num) != -1)
    {
       
        
        if(isMuty5(num)!=1)
        {
        
        fprintf(fPtrmuty5, "%d\n", num);
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

