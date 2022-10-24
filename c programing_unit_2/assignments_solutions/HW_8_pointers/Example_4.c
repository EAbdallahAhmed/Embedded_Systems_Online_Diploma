#include <stdio.h>
void main()
{   int *p,values[15],i,num;
    p=values;
    printf(" Enter the number of values (max is 15) : ");
    scanf("%d",&num);

    printf("Input %d number of elements in the array :  \n",num);
    for(i=0;i<num;i++)
    {
       printf("element-%d : ",i+1);
        scanf("%d",p++);
       // p++;
    }

    printf("\nThe elment of the array in reverse order are  : \n");
    for(i=0;i<num;i++)
    {
        printf("element-%d : %d\n",i+1,*(--p));

    }
}
