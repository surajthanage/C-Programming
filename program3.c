#include<stdio.h>

///////////////////////////////////////////////////////////////
//
// Function name : Display
// Description   : use to perfrom number 
// Input			 : Pointer,Integer
// Output			 : Integer
// Date			 : 1/04/2022
// Author			 : Suraj Sanjay Thanage
//
//////////////////////////////////////////////////////////////

void Display()
{
	int iCnt=0;
	for(iCnt=5;iCnt>=1;iCnt--)
	{
		printf("%d\n",iCnt);
	}
}

/////////////////////////////////////////////////
// Write a program to Display 1 to 5 numbers
/////////////////////////////////////////////////

int main()
{
	Display();

	return 0;
}

///////////////////////////////////////////////////////
//
// Input	:		5
// output	:		1	2	3	4	5	
//
///////////////////////////////////////////////////////