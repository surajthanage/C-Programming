#include<stdio.h>
#include<stdbool.h>


/////////////////////////////////////////////////////////////////////////
//
// Function name  : CountSmallX
// Description    : use to perfrom of string and count smallest character
// Input	      : String
// Output	      : Integer
// Date	          : 12/06/2022
// Author	      : Suraj Sanjay Thanage
//
//////////////////////////////////////////////////////////////////////////
int CountSmallX(char str[])
{
	static int iCnt=0;
	
	if(*str!='\0')
	{
		if((*str>='a') && (*str<='z'))
		{
			iCnt++;
		}
		str++;
		CountSmallX(str);
	}
	return iCnt;
}

///////////////////////////////////////////////////////////////////////////
// Write a recursive program which accept string from user and 
// count number of smallest character
///////////////////////////////////////////////////////////////////////////

int main()
{
	char Arr[20];
	int iRet=0;
	
	printf("Enter string\n");
	scanf("%[^'\n']s",Arr);
	
	iRet=CountSmallX(Arr);
	
	printf("Number of smallest character is :%d\n",iRet);
	return 0;	
}

///////////////////////////////////////////////////////
//
// Input	:	hello
// output	:	5
//
///////////////////////////////////////////////////////