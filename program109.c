#include<stdio.h>
#include<stdbool.h>


/////////////////////////////////////////////////////////////////////////////////////
//
// Function name  : StrCpySmaX
// Description    : use to perfrom string and string copy small latter
// Input          : String
// Output         : String
// Date	   			: 28/05/2022
// Author         : Suraj Sanjay Thanage
//
///////////////////////////////////////////////////////////////////////////////////////

void StrCpySmaX(char *str,char *dest)
{
	while(*str!='\0')
	{
		if((*str>='A')&&(*str<='Z'))
		{
			*str=*str+32;
			
		}
		*dest=*str;
			dest++;
	        str++;
	}
	*dest='\0';
}
/////////////////////////////////////////////////////////////////////////
// Accept character from user and string copy small latter
/////////////////////////////////////////////////////////////////////////

int main()
{
	char Arr[202];
	char Brr[202];
	
	printf("enter the first string\n");
	gets(Arr);
	
	StrCpySmaX(Arr,Brr);
	
	printf("  string copy small latter is  :%s\n",Brr);

	
	return 0;
}