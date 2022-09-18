#include <stdio.h>
 int testprime(int x);
void prime(int a,int b);
int main()
{  int x=0,y=0;
    printf("Enter  two numbers(intervals) : ");
    scanf("%d %d",&x,&y);
    prime(x,y);
    return 0;
}


// this function to test if input is prime or not;
int testprime(int n)
  {
      int i,c=0;
      for(i=2;i<n;i++)
      {
          if(n%i==0)
            c++;
      }
      if(c==0)
        return n;
      return -1;
  }

  //this for print the prime number in interval (a,b) by calling testprime function.
void prime(int a,int b)
{
    if(a>=0&&b>a)
        {
        int i;
        for(i=a;i<=b;i++)
        if(testprime(i)>0)
            printf("%d ",testprime(i));
        }

}

