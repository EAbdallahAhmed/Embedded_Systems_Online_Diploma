#include <stdio.h>
void main()
{   char str[500]="0",*p;int i=0;
    printf("Input a string : ");
    gets(str);
    p=str;
    while(str[i]!=0) // to go the end of string
    {
        p++;
        i++;
    }
    printf("The Reverse of the string is :");
    while(p>=str)     // to print the string in reverse way.

    {
        printf("%c",*p);
        p--;
    }

}
