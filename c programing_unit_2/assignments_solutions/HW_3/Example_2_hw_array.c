//this program make to sum of two matrix in 2x2 dimentiones
#include <stdio.h>
int main()
{
    int num;
    printf("Enter number of data : ");
    scanf("%d",&num);
    float a[num],sum=0;
     int j;
            for(j=0;j<num;j++)
        {
            printf("%d. Enter number : ",j+1);
            scanf("%f",&a[j]);
            sum+=a[j];
        }
         printf("Average = %2.2f\n\n",sum/num);


    return 0;
}
