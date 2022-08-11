#include <stdio.h>
int main()
{
    int num,element,j;
    printf("Enter no of elements : ");
    scanf("%d",&num);
    int a[num];
    for(j=0;j<num;j++)
        scanf("%d",&a[j]);
    printf("Enter the element to be searched : ");
    scanf("%d",&element);
    for(j=0;j<num;j++)
    {
       if(a[j]==element)
       {
        printf("number is found at location %d\n\n ",j+1);
           break;
       }
    }
    if (j==num)
    printf("\nthe element isn\'t found\n" );
    return 0;
}
