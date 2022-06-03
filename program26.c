#include<stdio.h>

///////////////////////////////////////////////////////////////
//
// Function name : CountOdd
// Description   : use to perfrom of 1 numbers
// Input	      : Integer,
// Output	      : Integer
// Date	          : 9/04/2022
// Author	      : Suraj Sanjay Thanage
//
//////////////////////////////////////////////////////////////

int CountOdd(int iNo)
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
		if(iDigit%2!=0)
		{
			iCnt++;
		}
		iNo=iNo/10;
	}
	return iCnt;
}
//////////////////////////////////////////////////////////////////////////////////
//Write a program wich accept number from user and return the count of odd digit.
//////////////////////////////////////////////////////////////////////////////////

int main()
{
	int iValue=0;
	int iRet=0;
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet=CountOdd(iValue);
	
	printf("%d",iRet);
	
	return 0;
}
///////////////////////////////////////////////
//
// Input	:	 52563		24680
// output	:	 3				0
//			
////////////////////////////////////////////////