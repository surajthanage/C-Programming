//Write aprogram which accept number from user and return of and  diffrence all  its factors non factors  .
#include<stdio.h>

///////////////////////////////////////////////////////////////
//
// Function name : DiffFact
// Description   : use to perfrom of 1 numbers
// Input			 : Integer
// Output			 : Integer
// Date			 : 4/04/2022
// Author			 : Suraj Sanjay Thanage
//
//////////////////////////////////////////////////////////////

int DiffFact(int iNo)
{
	int iCnt=0;
	int iSumF=0;
	int iSumN=0;
	for(iCnt=1;iCnt<iNo;iCnt++)
	{
		if(iNo%iCnt==0)
		{
			iSumF=iSumF+iCnt;
		}
		else
		{
			iSumN=iSumN+iCnt;
		}
	}
	return(iSumF-iSumN);
}

//////////////////////////////////////////////////////////////
// Write a program to diffrence all  its factors non factors
/////////////////////////////////////////////////////////////

int main()
{
	int iValue=0;
	int iRet=0;
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet=DiffFact(iValue);
	printf("Difference of facotors is  :  %d\n",iRet);
	
	return 0;
}

///////////////////////////////////////////////////////
//
// Input	:		4
// output	:		(1+2) 3
//
///////////////////////////////////////////////////////