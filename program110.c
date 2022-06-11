#include<stdio.h>
#include<stdbool.h>


/////////////////////////////////////////////////////////////////////////////////////
//
// Function name  : StrtoggleX
// Description    : use to perfrom string and convert toggle case
// Input          : String
// Output         : String
// Date	   			: 28/05/2022
// Author         : Suraj Sanjay Thanage
//
///////////////////////////////////////////////////////////////////////////////////////

void StrtoggleX(char *str,char *dest)
{
	while(*str!='\0')
	{
		if((*str>='A')&&(*str<='Z'))
		{
			*str=*str+32;
			
		}
		else if((*str>='a')&&(*str<='z'))
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
// Accept character from user and String convert toggle case
/////////////////////////////////////////////////////////////////////////

int main()
{
	char Arr[202];
	char Brr[202];
	
	printf("enter the first string\n");
	gets(Arr);
	
	StrtoggleX(Arr,Brr);
	
	printf("  string copy small latter is  :%s\n",Brr);

	
	return 0;
}