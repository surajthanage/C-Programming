//Write a program which accept one number from user and print that number of even number on screen

#include<stdio.h>

////////////////////////////////////////////////////////
//
// Function name : PrintEven
// Description   : use to perfrom of 2 numbers
// Input			 : Integer
// Output			 : Integer
// Date			 : 3/04/2022
// Author			 : Suraj Sanjay Thanage
//
///////////////////////////////////////////////////////

void PrintEven(int iNo)
{
	int iCnt=0;
	int iEven=0;
	if(iNo<=0)
	{
		return;
	}
	
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		iEven=2*iCnt;
		printf("  %d",iEven);
	}
}

///////////////////////////////////////////////////////
// Write a program to print that number of even number 
//////////////////////////////////////////////////////

int main()
{
	int iValue=0;
	printf("Enter the number\n");
	scanf("%d",&iValue);

	PrintEven(iValue);


	return 0;
}

///////////////////////////////////////////////////////
//
// Input	:	5
// output	:	2	4	6	8	10
//
///////////////////////////////////////////////////////