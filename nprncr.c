#include<stdio.h>
int fact(int);
int main()
{
    int n,r,npr,ncr,x;
    printf("Enter the value of n and r");
    scanf("%d %d",&n,&r);
    npr=fact(n)/fact(n-r);
    ncr=fact(n)/(fact(r)*fact(n-r));
    printf("npr=%d",npr);
    printf("ncr=%d",ncr);
    return 0;
}
int fact(int x)
{
    int i,f=1;
    for(i=1;i<=x;i++)
    {
        f=f*i;
    }
    return f;
}

