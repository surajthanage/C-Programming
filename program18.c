//Write aprogram which accept number from user and return of all  its non factors .
#include<stdio.h>

///////////////////////////////////////////////////////////////
//
// Function name : SumNonFactors
// Description   : use to perfrom of 1 numbers
// Input			 :  Integer
// Output			 : Integer
// Date			 : 4/04/2022
// Author			 : Suraj Sanjay Thanage
//
//////////////////////////////////////////////////////////////

int SumNonFactors(int iNo)
{
	int iCnt=0;
	int iSum=0;
	for(iCnt=1;iCnt<iNo;iCnt++)
	{
		if(iNo%iCnt!=0)
		{
			iSum=iSum+iCnt;
		}
	}
	return iSum;
}

///////////////////////////////////////////////////////
// Write a program to return of all  its non factors
//////////////////////////////////////////////////////

int main()
{
	int iValue=0;
	int iRet=0;
	printf("Enter Number\n");
	scanf("%d",&iValue);
	
	iRet=SumNonFactors(iValue);
	printf("Sumation of non factors is  : %d\n",iRet);
	
	return 0;
}

///////////////////////////////////////////////////////
//
// Input	:		4
// output	:		3
//
///////////////////////////////////////////////////////