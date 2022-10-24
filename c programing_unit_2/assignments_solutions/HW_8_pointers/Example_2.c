#include <stdio.h>
void main()
{   int i;
    char x,*p;
    x='A';
    p=&x;
    for(i=0;i<26;i++)
    {
        printf("%c ",(*p));
        x++;
    }

}
