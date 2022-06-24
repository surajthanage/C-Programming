#include<stdio.h>
#include<stdbool.h>


///////////////////////////////////////////////////////////////////////////
//
// Function name  : MiniDigit
// Description    : use to perfrom of 1 number return minimum digit
// Input	      : Integer
// Output	      : Integer
// Date	          : 12/06/2022
// Author	      : Suraj Sanjay Thanage
//
////////////////////////////////////////////////////////////////////////////
int MiniDigit(int iNo)
{
	static int iMinDigi=9;
	int iDigit=0;
	
	if(iNo!=0)
	{
		iDigit=iNo%10;
		if(iMinDigi>iDigit)
		{
			iMinDigi=iDigit;
		}
		iNo=iNo/10;
		MiniDigit(iNo);
	}
	return iMinDigi;
}

///////////////////////////////////////////////////////////////////////////
// Write a recursive program which accept number from user and return 
// smallest of its digit
///////////////////////////////////////////////////////////////////////////

int main()
{
	int iValue=0,iRet=0;
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet=MiniDigit(iValue);
	printf("Minimum digit from number is :%d\n",iRet);
	
	
	return 0;	
}

///////////////////////////////////////////////////////
//
// Input	:	53266
// output	:	2
//
///////////////////////////////////////////////////////