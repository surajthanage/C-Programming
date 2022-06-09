#include<stdio.h>
#include<stdbool.h>


//////////////////////////////////////////////////////////////////////
//
// Function name  : CountWhiteSpace
// Description    : use to perfrom string and  Count White Space of String
// Input		   : String
// Output		   : String
// Date		   : 27/05/2022
// Author		   : Suraj Sanjay Thanage
//
//////////////////////////////////////////////////////////////////////

int CountWhiteSpace(char *str)
{
	int iCnt=0;
	while(*str!='\0')
	{
		if(*str==' ')
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;
}
/////////////////////////////////////////////////////////////////////////
// Accept character from user and Convert toggle case
/////////////////////////////////////////////////////////////////////////

int main()
{
	char Arr[202];
	int iRet=0;
	
	printf("enter the string\n");
	scanf("%[^'\n']s",Arr);
	
	iRet=CountWhiteSpace(Arr);
	printf("White space of the string is %d\n",iRet);
	
	return 0;
}