#include<stdio.h>
int main ()
{
    int n,i;
    printf("Enter the no. of terms in array");
    scanf("%d",&n);
    int a[n];
    printf("Enter the terms");
    for(i=0;i<n;i++)
       {
         scanf("%d",&a[i]);
       }
    printf("The swapped array is");
    for(i=n-1;i>=0;i--)
        printf("%d",a[i]);

    return 0;
}


