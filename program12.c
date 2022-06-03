//Write aprogram which accept number from user and print even factors of that numbers.
#include<stdio.h>

////////////////////////////////////////////////////////
//
// Function name : DisplayFactors
// Description   : use to perfrom of 2 numbers
// Input			 : Integer,Integer
// Output			 : Integer
// Date			 : 3/04/2022
// Author			 : Suraj Sanjay Thanage
//
///////////////////////////////////////////////////////

void DisplayFactors(int iNo)
{
	int iCnt=0;
	
	if(iNo<=0)
	{
		iNo=-iNo;
	}
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		
		if((iNo%iCnt)==0)
		{
			
			printf("  %d    \n",iCnt);
		}
	}
}

//////////////////////////////////////////////////////////
// Write a program to print even factors of that numbers.
//////////////////////////////////////////////////////////

int main()
{
	int iValue=0;
	printf("Enter number\n");
	scanf("%d",&iValue);

	DisplayFactors(iValue);

	return 0;
}

///////////////////////////////////////////////////////
//
// Input	:		8
// output	:		2  4 
//
///////////////////////////////////////////////////////