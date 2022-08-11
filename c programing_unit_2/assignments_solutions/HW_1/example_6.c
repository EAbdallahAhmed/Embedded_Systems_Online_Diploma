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
	float num1,num2,temp;
	printf("Enter value of a = ");
	scanf("%f",&num1);
	printf("Enter value of b = ");
	scanf("%f",&num2);
	temp=num1; num1=num2;num2=temp;
	printf("\r\n\nAfter swapping, value of a = %f\nAfter swapping, value of b = %f  ",num1,num2);
	return 0;
}
