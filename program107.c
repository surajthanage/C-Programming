#include<stdio.h>
#include<stdbool.h>


/////////////////////////////////////////////////////////////////////////////////////
//
// Function name  : StrCpyX
// Description    : use to perfrom string and remove white space
// Input          : String
// Output         : String
// Date	   			: 28/05/2022
// Author         : Suraj Sanjay Thanage
//
///////////////////////////////////////////////////////////////////////////////////////

void StrCpyX(char *str,char *dest)
{
	while(*str!='\0')
	{
		if((*str>='A')&&(*str<='Z')||(*str>='a')&&(*str<='z'))
		{
			*dest=*str;
			dest++;
		    str++;
		}
		else if(*str==' ')
		{
			str++;
		}
		
	}
	*dest='\0';
}
/////////////////////////////////////////////////////////////////////////
// Accept character from user and  remove white space
/////////////////////////////////////////////////////////////////////////

int main()
{
	char Arr[202];
	char Brr[202];
	
	printf("enter the first string\n");
	gets(Arr);
	
	StrCpyX(Arr,Brr);
	
	printf(" remove white space string is  :%s\n",Brr);

	
	return 0;
}