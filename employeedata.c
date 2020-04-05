#include<stdio.h>
struct empdata
{
    int code;
    char name[30];
    char desig[20];
    int salary;
};
void salarysort(int n,struct empdata e)
{
    int i,j,k,temp;
    for(i=1;i<n;i++)
    {
        for(j=0;j<n-i;j++)
       {
           if(e[j].salary<e[j+1].salary)
        {
            temp=e[j];
            e[j]=e[j+1];
            e[j+1]=temp;
        }
            else
                continue;
        }
    for(i=0;i<n;i++)
    {
        printf("%-10d%-30s%-20s%-10d\n",e[i].code,e[i].name,e[i].desig,e[i].salary);
    }

}
}
void desigsort(int n,struct empdata e);
{
   int i,j,k;
   for(i=1;i<n;i++)
   {
       for(j=0;j<n-i;j++)
       {
           r=strcmp(e[j].des,e[j+1].des);
           if(r>0)
           {
               temp=e[j];
               e[j]=e[j+1];
               e[j+1]=temp;
           }
       }
   }
   for(i=0;i<n;i++)
    {
        printf("%-10d%-30s%-20s%-10d\n",e[i].code,e[i].name,e[i].desig,e[i].salary);
    }
}
int main()
{
    int n;
    printf("Enter the number of employees in your IT company\n");
    scanf("%d",&n);
    struct empdata e[30],temp;
    int i,j;
    for(i=0;i<n;i++)
    {
        printf("Enter employee %d data in the order\n1.Code 2.Name 3.Designation 4.Salary \n",i+1);
        scanf("%d%s%s%d",&e[i].code,e[i].name,e[i].desig,&e[i].salary);
    }
    salarysort(int n,struct empdata e);
    desigsort(int n,struct empdata e);
    return 0;
}
