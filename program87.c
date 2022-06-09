#include<stdio.h>
#include<stdbool.h>


//////////////////////////////////////////////////////////////////////
//
// Function name  : CountSmall
// Description    : use to perfrom Count Small latter
// Input		   : String
// Output		   : Integer
// Date			: 26/05/2022
// Author		   : Suraj Sanjay Thanage
//
//////////////////////////////////////////////////////////////////////

int CountSmall(char *str)
{
	int iCnt=0;
	while(*str!='\0')
	{
		if((*str>='a')&&(*str<='z'))
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;
}
/////////////////////////////////////////////////////////////////////////
// Accept character from user and Count Small latter
/////////////////////////////////////////////////////////////////////////

int main()
{
	char Arr[202];
	int iRet=0;
	printf("enter the string\n");
	scanf("%[^'\n']s",Arr);
	
	iRet=CountSmall(Arr);
	printf("Count of Small latter is : %d\n",iRet);
	
	return 0;
}