#include<stdio.h>
#define circle_area(radius) 3.14159265*radius*radius
void main()
{   double rad;
    printf("Enter the radius : ");
    scanf("%lf",&rad);
    printf("Area = %.2lf\n",circle_area(rad));
}
