#include<stdio.h>

////////////////////////////////////////////////////////
//
// Function name : Accept
// Description   : use to perfrom of 1 numbers
// Input			 : Integer
// Output			 : Pattern
// Date			 : 1/04/2022
// Author			 : Suraj Sanjay Thanage
//
///////////////////////////////////////////////////////

void Accept(int iNo)
{
	int iCnt=0;
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		printf("*\n");
	}
}

///////////////////////////////////////////////////////
// Write a program to print that number of * on screen
//////////////////////////////////////////////////////

int main()
{
	int iValue=0;

	printf("Enter number\n");
	scanf("%d",&iValue);

	Accept(iValue);

	return 0;
}

///////////////////////////////////////////////////////
//
// Input	:		3
// output	:		*		*		*		
//
///////////////////////////////////////////////////////