#include <stdio.h>

int main()
{
     int num;
     printf(" Enter an integer you want to check : ");
     scanf("%d",&num);
     if((num&1==1))
        printf("\t%dis odd ",num);
     else
        printf("\t%d is even ",num);
    return 0;
}
