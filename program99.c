#include<stdio.h>
#include<stdbool.h>


/////////////////////////////////////////////////////////////////////////////////////
//
// Function name  : LastChar
// Description    : use to perfrom string and  return last ocuuranc character
// Input          : String
// Output         : String
// Date	   			: 28/05/2022
// Author         : Suraj Sanjay Thanage
//
///////////////////////////////////////////////////////////////////////////////////////

int LastChar(char *str,char ch )
{
	int iCnt=0,i=0;
	
	while(*str!='\0')
	{
		iCnt++;
		if(*str==ch)
		{
			i=iCnt;
			
		}
		str++;
	}
	return i;
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
	
	iRet=LastChar(Arr,cValue);
	
	printf(" Last Occurance of a character is :%d\n",iRet);

	
	return 0;
}