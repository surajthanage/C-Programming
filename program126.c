#include<stdio.h>
#include<stdbool.h>


/////////////////////////////////////////////////////////////////////////
//
// Function name  : whiteSpace
// Description    : use to perfrom of string count white space
// Input	      : Integer
// Output	      : Integer
// Date	          : 12/06/2022
// Author	      : Suraj Sanjay Thanage
//
//////////////////////////////////////////////////////////////////////////
int CountWhiteSpace(char str[])
{
	static int iCnt=0;
	
	if(*str!='\0')
	{
		if(*str==' ')
		{
			iCnt++;
		}
		str++;
		CountWhiteSpace(str);
	}
	return iCnt;
}

///////////////////////////////////////////////////////////////////////////
// Write a recursive program which accept string from user and 
// count white space
///////////////////////////////////////////////////////////////////////////

int main()
{
	char Arr[20];
	int iRet=0;
	
	printf("Enter number\n");
	scanf("%[^'\n']s",Arr);
	
	iRet=CountWhiteSpace(Arr);
	printf("%d white space in string.\n",iRet);
	return 0;	
}

///////////////////////////////////////////////////////
//
// Input	:	asd fds gfd gf
// output	:	3
//
///////////////////////////////////////////////////////