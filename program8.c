//Accept on number from user if number is less than 10 then print hello otherwise print Demo

#include<stdio.h>

////////////////////////////////////////////////////////
//
// Function name : Display
// Description   : use to perfrom of 1 numbers
// Input			 : Integer
// Output			 : Pattern
// Date			 : 2/04/2022
// Author			 : Suraj Sanjay Thanage
//
///////////////////////////////////////////////////////

void Display(int iNo)
{
	if(iNo<10)
	{
		printf("Hello\n");
	}
	else
	{
		printf("Demo\n");
	}
}

///////////////////////////////////////////////////////
// Write a program to print Depend condition 
//////////////////////////////////////////////////////

int main()
{
	int iValue=0;

	printf("Enter the number\n");
	scanf("%d",&iValue);

	Display(iValue);

	return 0;
}

///////////////////////////////////////////////////////
//
// Input	:	1.	11		//	2.	5
// output	:		Demo	//		Hello
//
///////////////////////////////////////////////////////