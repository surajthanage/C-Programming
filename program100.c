#include<stdio.h>
#include<stdbool.h>


/////////////////////////////////////////////////////////////////////////////////////
//
// Function name  : strRev
// Description    : use to perfrom string and  revers string
// Input          : String
// Output         : String
// Date	   	  : 28/05/2022
// Author         : Suraj Sanjay Thanage
//
///////////////////////////////////////////////////////////////////////////////////////

void strRev(char *str)
{
	char *start=str;
	char *end=str;
	char Temp;
	
	while(*end!='\0')
	{
		end++;
	}
	end--;
	
	while(start<end)
	{
		Temp=*start;
		*start=*end;
		*end=Temp;
		start++;
		end--;
	}
}
/////////////////////////////////////////////////////////////////////////
// Accept character from user and reverse string
/////////////////////////////////////////////////////////////////////////

int main()
{
	char Arr[202];
	
	printf("enter the string\n");
	gets(Arr);

	strRev(Arr);
	
	printf(" After reverse string is  :%s\n",Arr);

	
	return 0;
}
