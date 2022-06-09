#include<stdio.h>
#include<stdbool.h>


//////////////////////////////////////////////////////////////////////
//
// Function name  : CheckCapital
// Description    : use to perfrom chech capital
// Input		   : Character
// Output		   : Character
// Date			: 25/05/2022
// Author		   : Suraj Sanjay Thanage
//
//////////////////////////////////////////////////////////////////////

bool CheckCapital(char ch)
{
	if((ch>='A')&&(ch<='Z'))
	{
		return true;
	}
	else
	{
		return false;
	}
}
///////////////////////////////////////////////////////////////////////
// Accept character from user and check whether it is capital or not
///////////////////////////////////////////////////////////////////////

int main()
{
	char cValue='\0';
	bool bRet;
	printf("enter the string\n");
	scanf("%s",&cValue);
	
	bRet=CheckCapital(cValue);
	if(bRet==true)
	{
		printf("It is a capital character\n");
	}
	else
	{
		printf("It is not a capital character\n");
	}
}