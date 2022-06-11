#include<stdio.h>
#include<stdbool.h>


/////////////////////////////////////////////////////////////////////////////////////
//
// Function name  : StrCpySamX
// Description    : use to perfrom string and  copy small chracter
// Input          : String
// Output         : String
// Date	   			: 28/05/2022
// Author         : Suraj Sanjay Thanage
//
///////////////////////////////////////////////////////////////////////////////////////

void StrCpySamX(char *str,char *dest)
{
	while(*str!='\0')
	{
		if((*str>='a')&&(*str<='z'))
		{
			*dest=*str;
			
			dest++;
		}
		str++;
	}
	*dest='\0';
}
/////////////////////////////////////////////////////////////////////////
// Accept character from user and copy small chracter
/////////////////////////////////////////////////////////////////////////

int main()
{
	char Arr[202];
	char Brr[202];
	
	printf("enter the string\n");
	gets(Arr);

	StrCpySamX(Arr,Brr);
	
	printf(" copy Small chracter string is  :%s\n",Brr);

	
	return 0;
}