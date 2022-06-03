//Write a program wich accept number from user and count frequency of 2 in it
#include<stdio.h>

///////////////////////////////////////////////////////////////
//
// Function name  : CountTwo
// Description    : use to perfrom 1 number
// Input		   : Integer
// Output		   : Integer
// Date			   : 4/05/2022
// Author		   : Suraj Sanjay Thanage
//
//////////////////////////////////////////////////////////////

int CountTwo(int iNo)
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
		if(iDigit==2)
		{
			iCnt++;
		}
		iNo=iNo/10;
	}
	return iCnt;
}

///////////////////////////////////////////////////////
// Write a program its count frequency of 2 in it
//////////////////////////////////////////////////////

int main()
{
	int iValue=0;
	int iRet=0;
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet=CountTwo(iValue);
	
	printf("%d",iRet);
	
	return 0;
}