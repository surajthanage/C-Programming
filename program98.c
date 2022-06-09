#include<stdio.h>
#include<stdbool.h>


/////////////////////////////////////////////////////////////////////////////////////
//
// Function name  : FirstChar
// Description    : use to perfrom string and  return First ocuuranc character
// Input          : String
// Output         : String
// Date	   			: 27/05/2022
// Author         : Suraj Sanjay Thanage
//
///////////////////////////////////////////////////////////////////////////////////////

int FirstChar(char *str,char ch )
{
	int iCnt=0;
	
	while(*str!='\0')
	{
		iCnt++;
		if(*str==ch)
		{
			iCnt;
			break;
		}
		str++;
	}
	return iCnt;
}
/////////////////////////////////////////////////////////////////////////
// Accept character from user and return First ocuuranc character
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
	
	iRet=FirstChar(Arr,cValue);
	
	printf(" first Occurance of a character is :%d\n",iRet);

	
	return 0;
}