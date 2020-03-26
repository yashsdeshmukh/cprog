#include<stdio.h>
int main()
{
    float area,peri,radius;
    float pie = 3.142 ;

    printf("Enter radius of the circle");
    scanf("%f",&radius);

    area=pie*(radius*radius);
    peri=2*pie*radius;

    printf("The area and perimeter of the given circle is %0.2f and %0.2f respectively",area,peri);

 return 0 ;
}
