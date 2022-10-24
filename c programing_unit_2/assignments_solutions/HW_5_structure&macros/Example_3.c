#include <stdio.h>
struct comp
{
    float m_r;
    float m_i;
};
struct comp readcomp(char a[])
{ struct comp x;
  printf("%s\nEnter real and imaginary respectively :  ",a);
  scanf("%f",&x.m_r);
  scanf("%f",&x.m_i);
 return x;
}

struct comp addcomp(struct comp A,struct comp B )
{
  struct comp z;
  z.m_r=A.m_r+B.m_r;
  z.m_i=A.m_i+B.m_i;
  return z;
}
void main()
{
    struct comp x,y,z;
 x=readcomp("for 1st complex number\n");
 y=readcomp("\nfor 2nd complex number\n");
 z=addcomp(x,y);
 printf("the sum is : %.1f+%.1fi ",z.m_r,z.m_i);

}
