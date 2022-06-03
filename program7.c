#include<stdio.h>
////////////////////////////////////////////////////////
//
// Function name : Display
// Description   : use to perfrom of 1 numbers
// Input			 : Integer
// Output			 : Pattern
// Date			 : 1/04/2022
// Author			 : Suraj Sanjay Thanage
//
///////////////////////////////////////////////////////
void Display(int iNo)
{
	int iCnt=0;
	while(iNo>iCnt)
	{
		printf("*\n");
		iNo--;
	}
}

///////////////////////////////////////////////////////
// Write a program to print that number of * on screen
//////////////////////////////////////////////////////

int main()
{
	int iValue = 0;

	printf("enter the number\n");
	scanf("%d",&iValue);

	Display(iValue);

	return 0;
}

///////////////////////////////////////////////////////
//
// Input	:		3
// output	:		*		*		*		
//
///////////////////////////////////////////////////////