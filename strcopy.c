#include<stdio.h>
int main()
{
    int i;
    char a[100]={0},b[100];
    printf("Enter the string:");
    scanf("%[^\n]s",&a);
    for(i=0;a[i]!=0;i++)
    b[i]=a[i];
    printf("The copied string is :%s",b);
    return 0;
}
