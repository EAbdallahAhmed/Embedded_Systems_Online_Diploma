
//this program make to sum of two matrix in 2x2 dimentiones
#include <stdio.h>
int main()
{
    float a[2][2],b[2][2];
    printf(" Enter elements of 1st matrix.\n");
     int i,j;
        for(i=0;i<2;i++)
            for(j=0;j<2;j++)
        {
            printf("Enter a%d%d : ",i+1,j+1);
            scanf("%f",&a[i][j]);
        }
         printf("\n Enter elements of 2nd matrix. \n");
         for(i=0;i<2;i++)
            for(j=0;j<2;j++)
        {
            printf(" Enter b%d%d : ",i+1,j+1);
            scanf("%f",&b[i][j]);
        }
        printf("\n sum matrix \n");
         for(i=0;i<2;i++){
            for(j=0;j<2;j++)
        {
            printf(" %2.1f\t",a[i][j]+b[i][j]);

        }
        printf("\n");
         }
    return 0;
}
