#include<stdio.h>
int fib(int);
int main()
{
    int n,i;
    printf("Enter how many terms you wish to print");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        printf("%d \n",fib(i));
    return 0;
}
int(fib(int n))
{
    if(n==1)
        return 0;
    if(n==2)
        return 1;
    if(n>2)
        return(fib(n-1)+fib(n-2));

}
