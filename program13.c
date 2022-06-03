//Write aprogram which accept number from user and print even factors of that numbers.
#include<stdio.h>

////////////////////////////////////////////////////////
//
// Function name : DisplayEvenFactor
// Description   : use to perfrom of 2 numbers
// Input			 : Integer,
// Output			 : Integer
// Date			 : 3/04/2022
// Author			 : Suraj Sanjay Thanage
//
///////////////////////////////////////////////////////

 void DisplayEvenFactor(int iNo)
{
	int iCnt=0;
	if(iNo<=0)
	{
		iNo=-iNo;
	}
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		if(((iNo%iCnt)==0)&&((iCnt%2)==0))
		{
			printf(" %d\n",iCnt);
		}
	}
}

//////////////////////////////////////////////////////////
// Write a program to print even factors of that numbers.
//////////////////////////////////////////////////////////

int main()
{
	int iValue=0;
	printf("Enter the value\n");
	scanf("%d",&iValue);

	DisplayEvenFactor(iValue);

	return 0;
}

///////////////////////////////////////////////////////
//
// Input	:		3
// output	:		1*2*3=6
//
///////////////////////////////////////////////////////