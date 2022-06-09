#include<stdio.h>
#include<stdbool.h>


//////////////////////////////////////////////////////////////////////
//
// Function name  : CheckDigit
// Description    : use to perfrom chech Digit
// Input		   : Integer
// Output		   : Integer
// Date			: 25/05/2022
// Author		   : Suraj Sanjay Thanage
//
//////////////////////////////////////////////////////////////////////

bool CheckCapital(char ch)
{
	if((ch>='0')&&(ch<='9'))
	{
		return true;
	}
	else 
	{
		return false;
	}
}
///////////////////////////////////////////////////////////////////////
// Accept character from user and check whether it is Digit or not
///////////////////////////////////////////////////////////////////////

int main()
{
	char cValue='\0';
	bool bRet;
	printf("enter the string\n");
	scanf("%c",&cValue);
	
	bRet=CheckCapital(cValue);
	if(bRet==true)
	{
		printf("It is a Digit\n");
	}
	else
	{
		printf("It is not a Digit\n");
	}
}