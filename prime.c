#include<stdio.h>
#include<math.h>
int main()
{
    int n,p,q,i;

    printf("Enter the number:");
    scanf("%d",&n);

    p=(int)sqrt(n);

    for(i=p;i>=2;i--)
    {

        q=n%p;
            if(q==0)
                printf("The number is composite");

            else if(q!=0 && i>=2)
                printf("The number is prime");
            else
                continue;
    }

   return 0;
}
