#include<stdio.h>
int main()
{

    int n,i,j,l,m;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    for(i=1;i<=(n/2);i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        {
            printf("***");
        }
        printf("\n");
    }
        for(l=1;l<=(n/2);l++)
        {
            for(m=1;m<=l;m++)
            {
                printf(" ");
            }
            {
                printf("***");
            }
            printf("\n");
        }

return 0;

}
