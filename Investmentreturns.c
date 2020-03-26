#include<stdio.h>
int main()
{
        int p ,maturitysi,maturityci,r,n ;

        printf("Enter your principle amount rate of interest and number of years in that order:");
        scanf("%d %d %d",&p,&r,&n);

        maturitysi=p(1+*r*n);
        maturityci=p*(pow((1+r),n));

        printf("Your maturity value for SI is %d and for CI is %d",maturitysi,maturityci);

return(0);
}
