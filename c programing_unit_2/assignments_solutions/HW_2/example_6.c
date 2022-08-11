#include <stdio.h>

int main()
{
    int  num,sum=0;
    printf("Enter an integer: ");
    scanf("%d",&num);
    if(num>0)
    {
        lable: {
                 sum+=num;
                 num--;
               }
        if(num !=0) goto lable;
        printf(" sum = %d ",sum);
    }
    else
        printf("please,enter a natural number.");
    return 0;
}
