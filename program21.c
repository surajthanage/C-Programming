#include<stdio.h>
#include<stdbool.h>

///////////////////////////////////////////////////////////////
//
// Function name  : CheckZero
// Description    : use to perfrom 1 number
// Input		   : Integer
// Output		   : Integer
// Date			   : 4/05/2022
// Author		   : Suraj Sanjay Thanage
//
//////////////////////////////////////////////////////////////

bool CheckZero(int iNo)
{
	int iDigit=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	while(iNo>0)
	{
		iDigit=iNo%10;
		if(iDigit==0)
		{
			return true;
		}
		
		iNo=iNo/10;
	}
}

////////////////////////////////////////////////////////////////
// Write a program its check whether it contain 0 in it or not
///////////////////////////////////////////////////////////////

int main()
{
	int iValue=0;
	bool bRet;
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	bRet=CheckZero(iValue);
	
	if(bRet==true)
	{
		printf("It contain Zero\n");
	}
	else
	{
		printf("It not contain Zero\n");
	}
		
	return 0;
}