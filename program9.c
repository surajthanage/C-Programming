#include<stdio.h>

////////////////////////////////////////////////////////
//
// Function name : Display
// Description   : use to perfrom of 2 numbers
// Input			 : Integer,Integer
// Output			 : Integer
// Date			 : 2/04/2022
// Author			 : Suraj Sanjay Thanage
//
///////////////////////////////////////////////////////

void Display(int iNo,int iFrequency )
{	

	for(iCnt=1;iCnt<=iFrequency;iCnt++)
	{
		printf("%d\n",iNo);		
	}

}

///////////////////////////////////////////////////////
// Write a program to Display n times number.
//////////////////////////////////////////////////////

int main()
{
	int iValue1=0;
	int iCnt=0;

	printf("Enter first number\n");
	scanf("%d",&iValue1);

	printf("Enter frequency\n");
	scanf("%d",&iCnt);

	Display(iValue1,iCnt);

	return 0;
}

///////////////////////////////////////////////////////
//
// Input	:		12		5
// output	:		 12	12	12	12	12
//
///////////////////////////////////////////////////////