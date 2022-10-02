#include <stdio.h>
struct student
{
char name[50];
int roll;
float marks;
};

void main()
{  int i;
  struct student students[10];
  printf("Enter information of students :\n");
 //geting data.
  for(i=0;i<10;i++)
  {   printf("\nFor roll number %d",students[i].roll=i+1);
      printf("\nEnter your name : ");
      fflush(stdin);fflush(stdout);
      gets(students[i].name);
      printf("Enter your marks : ");
      scanf("%f",&students[i].marks);
  }

  //printing data.
  printf("\nDisplaying information of students : \n");
  for(i=0;i<10;i++)
  {
    printf("\ninformation for roll number %d ",students[i].roll);
    printf("\nName :%s ",students[i].name);
    printf("\nMarks : %.2f\n\n",students[i].marks);
  }
}
