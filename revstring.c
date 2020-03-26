#include<stdio.h>
#include<string.h>
void rev(int,char[] );
int main()
{
    int n;
    char a[100];
    printf("Enter the string:");
    scanf("%[^\n]s",&a);
    n=strlen(a);
    rev(n,a);
    return 0;
}
void rev(int n, char a[100] )
{
    int i;
    printf("The reversed string is \n");
    for(i=n-1;i>=0;i--)
    {
        printf("%c",a[i]);
    }
}
