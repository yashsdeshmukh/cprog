#include<stdio.h>
int main()
{
    int n,pass,i,temp;
    printf("\nEnter the number of terms");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter the numbers ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(pass=1;pass<=n-1;pass++)
    {
        for(i=0;i<n-pass;i++)
        {
            if(a[i]>a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
            else
                continue;
        }
    }
    for(i=0;i<n;i++)
        printf("%d",a[i]);
    return 0;
}
