#include <stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    printf("Enter string : ");
    gets(str);
    printf("\nlength of string : %d\n\n",strlen(str));
    return 0;
}
