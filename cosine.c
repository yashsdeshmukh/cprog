#include<stdio.h>
#include<math.h>
int main()
{
    float nr,dr,fact,term,n,sum,x;
    int sign;

    printf("Enter the value of x");
    scanf("%f",&x);

    x=x*(3.142/180);

    sum=1;
    fact=1;
    sign=(-1);
    n=1;

    while(term>=0.000001)
    {
        nr=pow(x,2*n);
        fact=(2*n)*(2*n-1)*fact;
        term=nr/fact ;
        sum+=term*sign ;
        sign=sign*(-1);
        n++ ;

    }

    printf("The value of cosine is %f",sum);

return(0);

}



