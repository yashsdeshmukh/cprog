#include<stdio.h>
int expo(int ,int);
int main()
{   int n,m,result;
    printf("Enter the base and exponent" );
    scanf("%d %d",&n,&m);
    result=expo(n,m);
    printf("The value is %d",result);
    return 0;
}
int expo(int x,int y)
{
    if(y==1)
        return x;
    else
       return x*expo(x,y-1);

}
