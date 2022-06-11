#include<stdio.h>
#include<stdbool.h>


/////////////////////////////////////////////////////////////////////////////////////
//
// Function name  : StrCpyCapX
// Description    : use to perfrom string and  copy capital chracter
// Input          : String
// Output         : String
// Date	   			: 28/05/2022
// Author         : Suraj Sanjay Thanage
//
///////////////////////////////////////////////////////////////////////////////////////

void StrCpyCapX(char *str,char *dest)
{
	while(*str!='\0')
	{
		if((*str>='A')&&(*str<='Z'))
		{
			*dest=*str;
			
			dest++;
		}
		str++;
	}
	*dest='\0';
}
/////////////////////////////////////////////////////////////////////////
// Accept character from user and copy capital chracter
/////////////////////////////////////////////////////////////////////////

int main()
{
	char Arr[202];
	char Brr[202];
	
	printf("enter the string\n");
	gets(Arr);

	StrCpyCapX(Arr,Brr);
	
	printf(" copy capital chracter string is  :%s\n",Brr);

	
	return 0;
}