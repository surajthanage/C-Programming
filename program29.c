#include<stdio.h>

///////////////////////////////////////////////////////////////
//
// Function name : DiffDigit
// Description   : use to perfrom of 1 numbers
// Input	      : Integer
// Output	      : Integer
// Date	          : 11/04/2022
// Author	      : Suraj Sanjay Thanage
//
//////////////////////////////////////////////////////////////

int DiffDigit(int iNo)
{
	int iDigit=0;
	int iESum=0;
	int iOSum=0;
	int iDiff=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo!=0)
	{
		iDigit=iNo%10;
		if(iDigit%2==0)
		{
			iESum=iESum+iDigit;
		}
		else if(iDigit!=0)
		{
			iOSum=iOSum+iDigit;
		}
		iDiff=iESum-iOSum;
		iNo=iNo/10;
	}
	return iDiff;
}
///////////////////////////////////////////////////////////////
// Accept number and Difference bet even digit and odd digit
//////////////////////////////////////////////////////////////

int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet=DiffDigit(iValue);
	printf("%d",iRet);
	
	return 0;
}
///////////////////////////////////////////////
//
// Input	:	2345		24657
// output	:	-2				0
//			
////////////////////////////////////////////////