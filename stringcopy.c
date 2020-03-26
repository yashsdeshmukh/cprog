#include<stdio.h>
int main()
{
    int i;
    char a[100]={0};
    printf("Enter a string :\n");
    scanf("%[^\n]s",&a);
    for(i=0;a[i]!='\0';i++)
    {
        if(i==0)
        {    if(a[i]>='a'&&a[i]<='z')
                a[i]=a[i]-32;
             continue;
        }
        if(a[i]==' ')
        {
             ++i;
             if(a[i]>='a'&&a[i]<='z')
              {
                 a[i]=a[i]-32;
                 continue;
              }
        }
        else
        {
            if(a[i]>='A'&&a[i]<='Z')
            a[i]=a[i]+32;
        }
    }
     printf("String is %s",a);

}
