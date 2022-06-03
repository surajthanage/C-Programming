#include<stdio.h>

///////////////////////////////////////////////////////////////
//
// Function name  : Count
// Description    : use to perfrom 1 number
// Input		   : Integer
// Output		   : Integer
// Date			   : 4/05/2022
// Author		   : Suraj Sanjay Thanage
//
//////////////////////////////////////////////////////////////

int Count(int iNo)
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
		if(iDigit<6)
		{
			iCnt++;
		}
		iNo=iNo/10;
	}
	return iCnt;
}

///////////////////////////////////////////////////////
// Write a program count frequency of such a digit <6
//////////////////////////////////////////////////////

int main()
{
	int iValue=0;
	int iRet=0;
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet=Count(iValue);
	
	printf("%d",iRet);
	
	return 0;
}