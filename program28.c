#include<stdio.h>

///////////////////////////////////////////////////////////////
//
// Function name : MultDigit
// Description   : use to perfrom of 1 numbers
// Input	      : Integer,
// Output	      : Integer
// Date	          : 11/04/2022
// Author	      : Suraj Sanjay Thanage
//
//////////////////////////////////////////////////////////////

int MultDigit(int iNo)
{
	int iDigit=0;
	int iMult=1;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo>0)
	{
		iDigit=iNo%10;
		iMult=iMult*iDigit;
		iNo=iNo/10;
	}
	return iMult;
}
/////////////////////////////////////////////////////////////////////////////////////////
//Write a program wich accept number from user and return the multiplication all digit
/////////////////////////////////////////////////////////////////////////////////////////

int main()
{
	int iValue=0;
	int iRet=0;
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet=MultDigit(iValue);
	
	printf("%d",iRet);
	
	return 0;
}
///////////////////////////////////////////////
//
// Input	:	 1236		3215
// output	:	 36				30
//			
////////////////////////////////////////////////