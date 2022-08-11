#include <stdio.h>
#include<string.h>

int main()
{  int i;
char str[1000];
printf("Enter string : ");
gets(str);
for(i=0;i<(strlen(str)/2);i++)
  {               // '^' refers to xor operation.
    str[i]=str[i]^str[strlen(str)-i-1];
    str[strlen(str)-i-1]=str[i]^str[strlen(str)-i-1];
    str[i]=str[i]^str[strlen(str)-i-1];
  }
  printf("\nReverse string is : ");
for(i=0;i<strlen(str);i++)
    printf("%c",str[i]);
printf("\n\n");
return 0;
}
