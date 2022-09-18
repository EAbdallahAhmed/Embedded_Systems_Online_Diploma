#include <stdio.h>
int testpositive(int num);
int factorial(int num);
int main()
{  int x;
    printf("Enter positive integer : ");
    scanf("%d",&x);
    printf("factorial of %d = %d",x,factorial(x));
    return 0;
}


int testpositive(int num)
{
    if(num>0)
        return num;
    else if(num==0)
        return 1;
    return -1;
}
int factorial(int num)
{ if(num==0)
   return 1;
  return (testpositive( num))*factorial(--num);

}
