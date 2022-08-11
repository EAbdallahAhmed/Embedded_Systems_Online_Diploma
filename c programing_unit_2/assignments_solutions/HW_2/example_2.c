#include <stdio.h>

int main()
{
     char chart;
     printf(" Enter an alphabet : ");
     scanf("%c",&chart);
     if(chart>='A'&&chart<='Z'||chart>='a'&&chart<='z')
        if(chart=='a'||chart=='e'||chart=='o'||chart=='i'||chart=='u'||chart=='A'||chart=='E'||chart=='O'||chart=='I'||chart=='U')
            printf("%c is vowel.",chart);
        else
            printf("%c is consonant.",chart);
     else
        printf("\tthe entered character is not alphabet .please enter a correct one.");

    return 0;
}
