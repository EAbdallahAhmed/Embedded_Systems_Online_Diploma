#include <stdio.h>
#include<string.h>
int power(int base,int exp);
void main()
{ int base=1,exp=0;
    printf("Enter base number : ");
    scanf("%d",&base);
    printf("Enter power number (positive integer : ");
    scanf("%d",&exp);
    printf("%d^%d = %d",base,exp,power(base,exp));
}

int power(int base,int exp)
{
    if(exp==0)
        return 1;
    return base*power(base,--exp);
}

