#include <stdio.h>
int main()
{
    char str[1000],chart;int count=0,i=0;
    printf("Enter string : ");
    gets(str);
    printf("\nEnter a character to find frequency : ");
    scanf("%c",&chart);
    while(str[i]!=0)
    {
     if(str[i]==chart)
     {
         count++;
     }
     ++i;
    }
    printf("\nfrequence of %c = %d\n\n",chart,count);
    return 0;
}
