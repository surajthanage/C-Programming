#include<stdio.h>
#include<stdbool.h>


//////////////////////////////////////////////////////////////////////
//
// Function name  : CheckVowel
// Description    : use to perfrom string and check vowel chracter
// Input		   : String
// Output		   : Integer
// Date			: 26/05/2022
// Author		   : Suraj Sanjay Thanage
//
//////////////////////////////////////////////////////////////////////

bool CountSmall(char *str)
{
	while(*str!='\0')
	{
		if((*str=='a')||(*str=='e')||(*str=='i')||(*str=='o')||(*str=='u')||(*str=='A')||(*str=='E')||(*str=='I')||(*str=='O')||(*str=='U'))
		{
			break;
		}
		str++;
	}
	if(*str=='\0')
	{
		return false;
	}
	else
	{
		return true;
	}
}
/////////////////////////////////////////////////////////////////////////
// Accept character from user and Check Vowel contain or not
/////////////////////////////////////////////////////////////////////////

int main()
{
	char Arr[202];
	bool bRet=0;
	printf("enter the string\n");
	scanf("%[^'\n']s",Arr);
	
	bRet=CountSmall(Arr);
	if(bRet==true)
	{
		printf("Contain vowel\n");
	}
	else
	{
		printf("There is no vowel\n");
	}
	
	return 0;
}