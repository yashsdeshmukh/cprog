#include<stdio.h>
int main()
{
    int n;

    printf("Enter the year:");
    scanf("%d",&n);

    if(n%100==0 )
    {
        if (n%400==0)
            printf("It is a leap year");
        else
            printf("It is not a leap year");
    }
    else if(n%4==0)
    {
        printf("It is a leap year");
    }
    else

        printf("it is not a leap year");


}
