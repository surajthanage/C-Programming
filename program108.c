#include<stdio.h>
#include<stdbool.h>


/////////////////////////////////////////////////////////////////////////////////////
//
// Function name  : StrCpyCapX
// Description    : use to perfrom string and string copy capital latter
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
		if((*str>='a')&&(*str<='z'))
		{
			*str=*str-32;
			
		}
		*dest=*str;
			dest++;
	        str++;
	}
	*dest='\0';
}
/////////////////////////////////////////////////////////////////////////
// Accept character from user and string copy capital latter
/////////////////////////////////////////////////////////////////////////

int main()
{
	char Arr[202];
	char Brr[202];
	
	printf("enter the first string\n");
	gets(Arr);
	
	StrCpyCapX(Arr,Brr);
	
	printf("  string copy capital latter is  :%s\n",Brr);

	
	return 0;
}