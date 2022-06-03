#include<stdio.h>

///////////////////////////////////////////////////////////////
//
// Function name : MultiFact
// Description   : use to perfrom of 1 numbers
// Input			 : Integer
// Output			 : Integer
// Date			 : 4/04/2022
// Author			 : Suraj Sanjay Thanage
//
//////////////////////////////////////////////////////////////

int MultiFact(int iNo)
{
	int iCnt=0;
	int iMult=1;
	for(iCnt=1;iCnt<iNo;iCnt++)
	{
		if(iNo%iCnt==0)
		{
			iMult=iMult*iCnt;
		}
	}
	return iMult;
}

///////////////////////////////////////////////////////////
// Write a program to Dispaly its multification of factors
///////////////////////////////////////////////////////////

int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet=MultiFact(iValue);
	printf("%d",iRet);
	
	return 0;
}

///////////////////////////////////////////////////////
//
// Input	:		4
// output	:		(1*2)3
//
///////////////////////////////////////////////////////