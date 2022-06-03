//Write aprogram which accept number from user and Dispaly all its non factors .
#include<stdio.h>

///////////////////////////////////////////////////////////////
//
// Function name : DispalyNonFactors
// Description   : use to perfrom of 1 numbers
// Input			 :  Integer
// Output			 : Integer
// Date			 : 4/04/2022
// Author			 : Suraj Sanjay Thanage
//
//////////////////////////////////////////////////////////////

void DispalyNonFactors(int iNo)
{
	int iCnt=0;
	for(iCnt=1;iCnt<iNo;iCnt++)
	{
		if(iNo%iCnt!=0)
		{
			printf("	%d",iCnt);
		}
	}
}

///////////////////////////////////////////////////////
// Write a program to Dispaly all its non factors
//////////////////////////////////////////////////////

int main()
{
	int iValue=0;
	printf("Enter Number\n");
	scanf("%d",&iValue);
	
	DispalyNonFactors(iValue);
	
	return 0;
}

///////////////////////////////////////////////////////
//
// Input	:		8
// output	:		3  5 6 7
//
///////////////////////////////////////////////////////