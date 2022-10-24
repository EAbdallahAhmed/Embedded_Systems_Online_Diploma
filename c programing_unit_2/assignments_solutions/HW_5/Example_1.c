#include <stdio.h>
struct student
{ char name[50];
  int roll;
  float mark;
};

void main()
{
    struct student std_1;
    printf("Enter information of a student : \n\n");
    printf("Enter name : ");
    gets(std_1.name);
    printf("Enter roll number : ");
    scanf("%d",&std_1.roll);
    printf("Enter marks : ");
    scanf("%f",&std_1.mark);
    printf("\n\nDisplaying Information\n");
    printf("\nname : %s",std_1.name);
    printf("\nRoll : %d",std_1.roll);
    printf("\nMarks : %.2f\n",std_1.mark);

}
