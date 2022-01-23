 #include<stdio.h>
int main()
{
    int current_row,current_col,destination_row,destination_col;
    scanf("%d%d%d%d",&current_row,&current_col,&destination_row,&destination_col);

 
    if(current_row == destination_row)
        printf( "POSSIBLE");
    else if(current_col == destination_col)
        printf("POSSIBLE");
    else
       printf("NOT POSSIBLE");

}
