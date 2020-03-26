#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter number of rows");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=n-i;j>=1;j--)
           {printf(" ");}

        printf("***");
        printf("\n");

    }
return 0;
}
