//binary search//
#include<stdio.h>
#include<stdlib.h>
int main()
{   int n,i,x,first,last,mid,a[100];
    printf("Enter the number of terms in you wish to enter\n");
    scanf("%d",&n);
    printf("Enter the terms\n ");
    for(i=0;i<n;i++)
        scanf("%d",a[i]);
    printf("Enter value to find ");
    scanf("%d",&x);
    first=0;
    last=n-1;
    mid=(first+last)/2;

    while(first<=last)
    {
        if(a[mid]<x)
        {
            first=mid+1;
        }
        else if(a[mid]==x)
        {
            printf("%d found at location %d",x,mid+1);
            break;
        }
        else
           {
             last=mid-1;
           }
    }mid=(first+last)/2;
    if(first>last)
        printf("Error");
    return 0;
}

