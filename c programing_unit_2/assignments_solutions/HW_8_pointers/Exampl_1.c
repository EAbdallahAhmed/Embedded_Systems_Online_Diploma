#include <stdio.h>
void main()
{
    int m;
    int  *ab;
    m=29;

    printf("Address of m : %p \n",&m);
    printf("Value of m : %d \n",m);

    printf("\nNow ab is assigned with the address of m.\n");
    ab=&m;
    printf("Address of pointer ab : %p\n",ab);
    printf("Content of pointer ab : %d \n",*ab);

    printf("\nThe value of m assigned to 34 now.\n");
    m=34;
    printf("Address of pointer ab : %p \n",ab);
    printf("Content of pointer ab : %d \n",*ab);

    printf("\nThe pointer variable ab is assigned with the value 7 now.\n");
    *ab=7;
    printf("Address of m : %p \n",&m);
    printf("Value of m : %d \n",m);

}
