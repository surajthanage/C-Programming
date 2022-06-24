#include<stdio.h>
#include<stdbool.h>


/////////////////////////////////////////////////////////////////////////
//
// Function name  : MaxDigit
// Description    : use to perfrom of 1 number maximum digit
// Input	      : Integer
// Output	      : Integer
// Date	          : 12/06/2022
// Author	      : Suraj Sanjay Thanage
//
//////////////////////////////////////////////////////////////////////////
int MaxDigit(int iNo)
{
	static int iMax=0;
	int iDigit=0;
	
	if(iNo!=0)
	{
		iDigit=iNo%10;
		if(iMax<iDigit)
		{
			iMax=iDigit;
		}
		iNo=iNo/10;
		MaxDigit(iNo);
	}
	return iMax;
}

///////////////////////////////////////////////////////////////////////////
// Write a recursive program which accept number from user and return 
// largest of its digit
///////////////////////////////////////////////////////////////////////////

int main()
{
	int iValue=0,iRet=0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet=MaxDigit(iValue);
	printf("Maximum of digit is :%d\n",iRet);
	
	return 0;	
}

///////////////////////////////////////////////////////
//
// Input	:	879
// output	:	9
//
///////////////////////////////////////////////////////