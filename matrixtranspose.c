#include<stdio.h>
int main()
{
    int row,col;
    int i,j;
    int mat[10][10],transpose[10][10];
    //defining the order of matrix
    printf("\n Input the number of rows :");
    scanf("%d",&row);
    printf("Input number of cols:");
    scanf("%d",&col);
    //Input elements in matrix
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("Input values for :%d:%d",i+1,j+1);
            scanf("%d",&mat[i][j]);

        }
    }
    printf("Entered matrix is as follows\n ");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
            {printf("%d",mat[i][j]);}
    printf("\n");
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
            transpose[i][j]=mat[j][i];
    }
    printf("\nTranspose of matrix is \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
            {printf("%d",transpose[i][j]);}
    printf("\n");
    }
    return 0;
}
