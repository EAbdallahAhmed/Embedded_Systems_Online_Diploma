#include <stdio.h>

int main()
{
    float n1,n2,n3;
    printf("Enter three real numbers: ");
    scanf("%f %f %f",&n1,&n2,&n3);
    if(n1>=n2&&n1>=n3)
        printf(" Largest number is : %f",n1);
     else if(n2>=n1&&n2>=n3)
        printf(" Largest number is : %f",n2);
     else //(n3>=n1&&n3>=n2)
        printf(" Largest number is : %f",n3);
    return 0;
}
