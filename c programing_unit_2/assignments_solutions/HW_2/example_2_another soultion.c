#include <stdio.h>

int main()
{ long long fact1=439704915;
  long long fact2=13359532095;
  /*
  fcat2=multiplication of ASCII of 'a','i','o','e' and 'u'.==> fact2=97*105*111*101*117
  fcat2=multiplication of ASCII of 'A','I','O','E' and 'U'.==>  65*79*73*85*69=219852457
  but (219852457%75==0) 75 is ASCII value of'k'
  so fact1=219852457/5 =439704915 ===> 439704915%75!=0  ---------->!!that we want to make remainder equal zero when we enter vowel alphbet.
  */
  printf("fact1 =%lf------fact2 =%lf",fact1,fact2);
   char chart;
   printf("Enter an alphabet : ");
   scanf("%c",&chart);
   if(chart>='A'&&chart<='Z')
        if(fact1%chart==0)
            printf(" %c is vowel.",chart);
        else
            printf(" %c is consonant.",chart);
    else if(chart>='a'&&chart<='z')
            if(fact2%chart==0)
            printf(" %c is vowel.",chart);
        else
            printf(" %c is consonant.",chart);
    else
         printf("enter a correct alphabet.");
    return 0;
}
