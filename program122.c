#include<stdio.h>
#include<stdbool.h>


/////////////////////////////////////////////////////////////////////////
//
// Function name  : SumDigit
// Description    : use to perfrom of 1 number Summation digit
// Input	      : Integer
// Output	      : Pattern
// Date	          : 11/06/2022
// Author	      : Suraj Sanjay Thanage
//
//////////////////////////////////////////////////////////////////////////
int SumDigit(int iNo)
{
	static int iSum=0;
	int iDigit=0;
	
	if(0<iNo)
	{
		iDigit=iNo%10;
		iSum=iSum+iDigit;
		iNo=iNo/10;
		SumDigit(iNo);
	}
	return iSum;
}

///////////////////////////////////////////////////////////////////////////
// Write a recursive program which accept number from user and return 
// summation of its digit
///////////////////////////////////////////////////////////////////////////

int main()
{
	int iValue=0,iRet=0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet=SumDigit(iValue);
	printf("Summation of digit is :%d\n",iRet);
	
	return 0;	
}

///////////////////////////////////////////////////////
//
// Input	:	879
// output	:	24
//
///////////////////////////////////////////////////////