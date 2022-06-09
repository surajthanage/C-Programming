#include<stdio.h>
#include<stdbool.h>


/////////////////////////////////////////////////////////////////////////////////////
//
// Function name  : CountChar
// Description    : use to perfrom string and  return frequncy of character
// Input          : String
// Output         : String
// Date	   			: 27/05/2022
// Author         : Suraj Sanjay Thanage
//
///////////////////////////////////////////////////////////////////////////////////////

int CheckChar(char *str,char ch )
{
	int iCnt=0;
	
	while(*str!='\0')
	{
		if(*str==ch)
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;
}
/////////////////////////////////////////////////////////////////////////
// Accept character from user and return frequency of character
/////////////////////////////////////////////////////////////////////////

int main()
{
	char Arr[202];
	char cValue='\0';
	int iRet;
	
	printf("enter the string\n");
	gets(Arr);
	
	printf("Enetr search character \n");
	scanf("%c",&cValue);
	
	iRet=CheckChar(Arr,cValue);
	
	printf(" Frequency of a character is :%d\n",iRet);

	
	return 0;
}