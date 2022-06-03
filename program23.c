#include<stdio.h>

///////////////////////////////////////////////////////////////
//
// Function name  : CountFour
// Description    : use to perfrom 1 number
// Input		   : Integer
// Output		   : Integer
// Date			   : 4/05/2022
// Author		   : Suraj Sanjay Thanage
//
//////////////////////////////////////////////////////////////

int CountFour(int iNo)
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
		if(iDigit==4)
		{
			iCnt++;
		}
		iNo=iNo/10;
	}
	return iCnt;
}

///////////////////////////////////////////////////////
// Write a program count frequency of 2 in it
//////////////////////////////////////////////////////

int main()
{
	int iValue=0;
	int iRet=0;
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet=CountFour(iValue);
	
	printf("%d",iRet);
	
	return 0;
}