#include <stdio.h>

int main()
{
    char chart;
    printf("Enter a character: ");
    scanf("%c",&chart);
    if(chart>='A'&&chart<='Z'||chart>='a'&&chart<='z')
        printf("%c is alphabet ",chart);
    else
        printf(" %c is not alphabet ",chart);
    return 0;
}
