#include<stdio.h>
#include<math.h>
int main()
{
        int p,maturitysi,maturityci,r,n,factor ;

        printf("Enter your principle amount rate of interest and number of years in that order:");
        scanf("%d %d %d",&p,&r,&n);
        factor = pow((1+r),n);
        maturitysi = p*(1+(r*n));
        maturityci = p*factor;

        printf("Your maturity value for SI is %d and for CI is %d",maturitysi,maturityci);

return(0);
}
