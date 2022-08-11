//this program make to sum of two matrix in 2x2 dimentiones
#include <stdio.h>
int main()
{
    int num,element,location,j,i=0;
    printf("Enter no of elements : ");
    scanf("%d",&num);
    int a[num],b[num+1];
    for(j=0;j<num;j++)
        scanf("%d",&a[j]);
    printf("Enter the element to be inserted : ");
    scanf("%d",&element);
    printf("Enter the location :");
    scanf("%d",&location);
    location--;
    for(j=0;j<num+1;j++,i++)
    {
       if(j==location)
       {
           b[j]=element;
            i=j-1;
           continue;
       }
       b[j]=a[i];
    }

    for(j=0;j<num+1;j++)
        printf("%d ",b[j]);
    return 0;
}
