#include <stdio.h>
int main()
{
    int  num,fact=1;
    printf("Enter an integer: ");
    scanf("%d",&num);
    if(num>0)
    {
        lable: {
                 fact*=num;
                 num--;
               }
        if(num !=0) goto lable;
        printf(" factorial = %d ",fact);
    }
    else if(num==0)
        printf("factorial =1");
    else if(num<0)
        printf("Error!!! factorial of negative number doesn't exist.");
    return 0;
}
