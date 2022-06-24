#include<stdio.h>
#include<stdbool.h>


/////////////////////////////////////////////////////////////////////////
//
// Function name  : ReverseNumber
// Description    : use to perfrom of 1 number return Reverse Number
// Input	      : Integer
// Output	      : Integer
// Date	          : 12/06/2022
// Author	      : Suraj Sanjay Thanage
//
//////////////////////////////////////////////////////////////////////////
int ReverseNumber(int iNo)
{
	static int iRev=0;
	int iDigit=0;
	
	if(iNo!=0)
	{
		iDigit=iNo%10;
		iRev=iRev*10+iDigit;
		iNo=iNo/10;
		ReverseNumber(iNo);
	}
	return iRev;
}

///////////////////////////////////////////////////////////////////////////
// Write a recursive program which accept number from user and 
// return Reverse Number.
///////////////////////////////////////////////////////////////////////////

int main()
{
	int iValue=0,iRet=0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	iRet=ReverseNumber(iValue);
	printf("Reverse Number is :%d\n",iRet);
	
	return 0;	
}

///////////////////////////////////////////////////////
//
// Input	:	523
// output	:	325
//
///////////////////////////////////////////////////////