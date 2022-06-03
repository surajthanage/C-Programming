//Accept the character from user and check whether that character is vowel (a,e,i,o,u) or not

#include<stdio.h>
typedef int BOOL;
#define TRUE 1;
#define FALSE 0;

////////////////////////////////////////////////////////
//
// Function name : CheckValue
// Description   : use to perfrom of vowel  character
// Input			 : Character
// Output			 : Character
// Date			 : 3/04/2022
// Author			 : Suraj Sanjay Thanage
//
///////////////////////////////////////////////////////

BOOL CheckValue(char cCh)
{    
	if(cCh=='a'||cCh=='A'||cCh=='e'||cCh=='E'||cCh=='i'||cCh=='I'||cCh=='o'||cCh=='O'||cCh=='u'||cCh=='U')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

////////////////////////////////////////////////////////////
// Write a program to check whether that character is vowel
////////////////////////////////////////////////////////////

int main()
{
	char cValue='\0';
	BOOL bRet=FALSE;

	printf("Enter character\n");
	scanf("%c",&cValue);

	bRet=CheckValue(cValue);
	if(bRet==1)
	{
		printf("  is vowel character");
	}
	else
	{
		printf(" is  not vowel character");
	}
	return 0;
}

///////////////////////////////////////////////////////
//
// Input	:		a
// output	:		is vowel character
//
///////////////////////////////////////////////////////