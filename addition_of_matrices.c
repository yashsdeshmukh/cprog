#include<stdio.h>
void inputmatrix(int row,int col,int mat[10][10])
{   int i,j,mat[10][10]={0};
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("Input values for 1st matrix :%d:%d",i+1,j+1);
            scanf("%d",&mat[i][j]);

        }
    }
    printf("\n");
}
void addmatrices(int row,int col,int mat1,int mat2)
{   int i,j,mat3[10][10]={0};
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            mat3[i][j]=mat1[i][j]+mat2[i][j];
        }
    }
}
void printmatrix(int row,int col,int mat3)
{   int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%-3d ",mat3[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int row,col,i,j,mat1[10][10],mat2[10][10],mat3[10][10];
    printf("Enter no. of rows of 1st matrix");
    scanf("%d",&row);
    printf("Enter no. of columns of 1st matrix");
    scanf("%d",&col);
    inputmatrix(row,col,mat1);
    inputmatrix(row,col,mat2);
    addmatrices(row,col,mat1,mat2);
    printf("The addition of matrices is :");
    printmatrix(row,col,mat3);
    return 0;
}