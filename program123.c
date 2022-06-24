#include<stdio.h>
#include<stdbool.h>


/////////////////////////////////////////////////////////////////////////
//
// Function name  : strlenX
// Description    : use to perfrom of string and count character
// Input	      : Integer
// Output	      : Pattern
// Date	          : 11/06/2022
// Author	      : Suraj Sanjay Thanage
//
//////////////////////////////////////////////////////////////////////////
int strlenX(char str[])
{
	static int iCnt=0;
	if(*str!='\0')
	{
		iCnt++;
		str++;
		strlenX(str);
	}
	return iCnt;
}

///////////////////////////////////////////////////////////////////////////
// Write a recursive program which accept string from user and 
// count number of character
///////////////////////////////////////////////////////////////////////////

int main()
{
	char Arr[20];
	int iRet=0;
	
	printf("Enter string\n");
	scanf("%[^'\n']s",Arr);
	
	iRet=strlenX(Arr);
	
	printf("Number of character is :%d\n",iRet);
	return 0;	
}

///////////////////////////////////////////////////////
//
// Input	:	hello
// output	:	5
//
///////////////////////////////////////////////////////