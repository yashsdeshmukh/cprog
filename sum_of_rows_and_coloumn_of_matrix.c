#include<stdio.h>
int main()
{
    int row,col,i,j,mat[10][10],sum;
    printf("Enter no. of rows");
    scanf("%d",&row);
    printf("Enter no. of columns");
    scanf("%d",&col);
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
    {   sum=0;
        for(j=0;j<col;j++)
         {
             sum=sum+mat[i][j];
         }
        printf("sum of %d th row is %d",i+1,sum);
        printf("\n");
    }
    for(j=0;j<row;j++)
    {   sum=0;
        for(i=0;i<col;i++)
         {
             sum=sum+mat[i][j];
         }
        printf("sum of %d th col is %d",j+1,sum);
        printf("\n");
    }
  return 0;
}
