#include<stdio.h>
#include<stdbool.h>


//////////////////////////////////////////////////////////////////////
//
// Function name  : CountCapital
// Description    : use to perfrom Count Capital latter
// Input		   : String
// Output		   : Integer
// Date			: 26/05/2022
// Author		   : Suraj Sanjay Thanage
//
//////////////////////////////////////////////////////////////////////

int CountCapital(char *str)
{
	int iCnt=0;
	while(*str!='\0')
	{
		if((*str>='A')&&(*str<='Z'))
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;
}
/////////////////////////////////////////////////////////////////////////
// Accept character from user and Count Capital latter
/////////////////////////////////////////////////////////////////////////

int main()
{
	char Arr[202];
	int iRet=0;
	printf("enter the string\n");
	scanf("%[^'\n']s",Arr);
	
	iRet=CountCapital(Arr);
	printf("Count of capital latter is : %d\n",iRet);
	
	return 0;
}