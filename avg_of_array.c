#include<stdio.h>
int main()
{
    int a[50],n,sum=0,i;
    float avg;
    printf("Enter number of elements in array:");
    scanf("%d",&n);
    printf("Enter elements in array:");
    for(i=0;i<n;i++)
       {
         scanf("%d",&a[i]);
       }
    for(i=0;i<n;i++)
        {sum+=a[i];}
    avg=0;
    avg=sum/n;
    printf("The average of array is :%f",avg);
    return 0;
}
