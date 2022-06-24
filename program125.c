#include<stdio.h>
#include<stdbool.h>


/////////////////////////////////////////////////////////////////////////
//
// Function name  : MultDigit
// Description    : use to perfrom of 1 number return product of Digit
// Input	      : Integer
// Output	      : Pattern
// Date	          : 11/06/2022
// Author	      : Suraj Sanjay Thanage
//
//////////////////////////////////////////////////////////////////////////
int MultDigit(int iNo)
{
	static int iMult=1;
	int iDigit=0;
	
	if(0<iNo)
	{
		iDigit=iNo%10;
		iMult=iMult*iDigit;
		iNo=iNo/10;
		MultDigit(iNo);
	}
	return iMult;
}

///////////////////////////////////////////////////////////////////////////
// Write a recursive program which accept number from user and 
// return product of digit.
///////////////////////////////////////////////////////////////////////////

int main()
{
	int iValue=0,iRet=0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	iRet=MultDigit(iValue);
	printf("Product of digit is :%d\n",iRet);
	
	return 0;	
}

///////////////////////////////////////////////////////
//
// Input	:	523
// output	:	30
//
///////////////////////////////////////////////////////