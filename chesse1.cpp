/*Chess rook moves horizontally or vertically. Given two different cells of the chessboard, determine whether a rook can go from the first cell to the second in one move.
Input:
4 4 5 5
Output:
No
Input:
4 4 5 4
Output:
Yes*/

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
