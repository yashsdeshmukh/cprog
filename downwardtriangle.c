#include<stdio.h>
int main()
{
    int n,i,j;

    printf("Enter number of rows");
    scanf("%d",&n);
    j=1;
    for(i=1;i<=n;i++)
    {
        for(i=1;i<=i-1;i++)
        {printf(" ");}
        for(j=1;j<=2*(n-i)+1;j++)
        {printf("*");}
        i++;


        printf("\n");

    }
return 0;
}
