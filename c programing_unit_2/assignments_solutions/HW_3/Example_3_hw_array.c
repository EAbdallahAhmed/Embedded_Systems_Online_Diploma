#include <stdio.h>
int main()
{    int row,colum,i,j;
    printf("Enter rows and column of a matrix : ");
    scanf("%d%d",&row,&colum);
    int a[row][colum];
    printf("Enter elements of matrix.\n");
     for(i=0;i<row;i++)
        for(j=0;j<colum;j++)
        {
            printf("Enter element a%d%d : ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
     printf("Entered matrix: \n");
     for(i=0;i<row;i++)
     {   for(j=0;j<colum;j++)
        {
            printf("%d\t",a[i][j]);
        }
       printf("\n");
     }
     printf("transpose of matrix: \n");
     for(i=0;i<colum;i++)
     {   for(j=0;j<row;j++)
        {
            printf("%d\t",a[j][i]);
        }
       printf("\n\n");
     }
    return 0;
}
