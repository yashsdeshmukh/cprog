#include<stdio.h>
int main()
{   int n,m,result=1,i;
    printf("Enter the base and exponent" );
    scanf("%d %d",&n,&m);

    for(i=1;i<=m;i++)
    {result=result*n;}

    printf("The value is %d",result);

}
