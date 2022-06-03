#include<stdio.h>

///////////////////////////////////////////////////////////////
//
// Function name : CountRange
// Description   : use to perfrom of 1 numbers
// Input	      : Integer
// Output	      : Integer
// Date	          : 11/04/2022
// Author	      : Suraj Sanjay Thanage
//
//////////////////////////////////////////////////////////////

int CountRange(int iNo)
{
	int iDigit=0;
	int iCnt=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo>0)
	{
		iDigit=iNo%10;
		if((iDigit>3)&&(iDigit<7))
		{
			iCnt++;
		}
		iNo=iNo/10;
	}
	return iCnt;
}
////////////////////////////////////////////////////////////////////////////
//Accept number from user and return the count of digit in between 3and 7.
/////////////////////////////////////////////////////////////////////////////

int main()
{
	int iValue=0;
	int iRet=0;
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet=CountRange(iValue);
	
	printf("%d",iRet);
	
	return 0;
}
///////////////////////////////////////////////
//
// Input	:	 2395		4521		9922
// output	:	 1				2		0
//			
////////////////////////////////////////////////