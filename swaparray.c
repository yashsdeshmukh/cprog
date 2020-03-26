#include<stdio.h>
int swap(int,int);
int main ()
{
    int n,i;
    printf("Enter the no. of terms in array");
    scanf("%d",&n);
    int a[n];
    printf("Enter the terms");
    for(i=0;i<=n;i++)
        scanf("%d",a[i]);
    swap(a,n);
    printf("The swapped array is %d",a);
    return 0;
}
int swap(int x,int y)
{   int i,temp;
    for(i=0;i<=y/2;i++)
      {
        temp=x[i];
        x[i]=x[y-1-i];
        x[y-1-i]=temp;
      }
      return x;
}
