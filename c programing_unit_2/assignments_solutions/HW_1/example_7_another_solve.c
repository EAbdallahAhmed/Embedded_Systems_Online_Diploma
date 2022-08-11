/*
 ============================================================================
 Name        : swaping
 Author      : Abdallah_sultan
 Version     :
 Copyright   : Your copyright notice
 Description : C Program to Swap Two Numbers
 ============================================================================
 */
#include"stdio.h"
int main()
{
	int num1,num2; // another solution if numbers are integers.
	printf("Enter value of a = ");
	scanf("%d",&num1);
	printf("Enter value of b = ");
	scanf("%d",&num2);
	num1=num1^num2;
	num2=num1^num2;
	num1=num1^num2;
	printf("\r\n\nAfter swapping, value of a = %d\nAfter swapping, value of b = %d  ",num1,num2);
	return 0;
}
