#include <stdio.h>
#include<string.h>
struct empolyee
{
    char name[100];
    unsigned int Id;
};

int main ()
{  int i;
   struct empolyee *emps[10],**ptr,emps1[10];
   // emps1[10] to reserve size of memory to store data
   //*emps[10] to store address of data .
   // **ptr to point to *emps.

   for(i=0;i<3;i++) {emps[i]=&emps1[i];} // to initialize the addresses.

   ptr=emps;

   strcpy((*ptr)->name,"Alex");
   (*ptr)->Id=1002;

    printf("Employee Name : %s \n",(*ptr)->name);
    printf("Employee ID : %d",(*ptr)->Id);
    printf("\n\n");
    return 0;
}
