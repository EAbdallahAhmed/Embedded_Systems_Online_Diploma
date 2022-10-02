#include <stdio.h>
struct distance
{
int feet;
float inch;
};

void main()
{
    struct distance dis_1,dis_2,sum;
    //geting data from user.
    printf("Enter information of 1st distance : ");
    printf("\nEnter feet : ");
    scanf("%d",&dis_1.feet);
    printf("Enter inch : ");
    scanf("%f",&dis_1.inch);
    printf("\n\nEnter information of 2nd distance : ");
    printf("\nEnter feet : ");
    scanf("%d",&dis_2.feet);
    printf("Enter inch : ");
    scanf("%f",&dis_2.inch);

    //processing data.
    sum.inch=dis_1.inch+dis_2.inch;
    sum.feet=dis_1.feet+dis_2.feet+(int)(sum.inch/12);
    sum.inch-=((int)(sum.inch/12)*12);
    //printing data.
    printf("\nsum = %d \'-%.1f\'\n",sum.feet,sum.inch);
}
