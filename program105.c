#include<stdio.h>
#include<stdbool.h>


/////////////////////////////////////////////////////////////////////////////////////
//
// Function name  : StrcatX
// Description    : use to perfrom string and connect string after end first string
// Input          : String
// Output         : String
// Date	   			: 28/05/2022
// Author         : Suraj Sanjay Thanage
//
///////////////////////////////////////////////////////////////////////////////////////

void StrcatX(char *str,char *dest)
{
	while(*str!='\0')
	{
		str++;
	}

	while(*dest!='\0')
	{
		*str=*dest;
		str++;
		dest++;
	}
	*str='\0';
}
/////////////////////////////////////////////////////////////////////////
// Accept character from user and connect string after end first string
/////////////////////////////////////////////////////////////////////////

int main()
{
	char Arr[202];
	char Brr[202];
	
	printf("enter the first string\n");
	gets(Arr);
	
	printf("enter the second string\n");
	gets(Brr);

	StrcatX(Arr,Brr);
	
	printf(" connect string after end first string is  :%s\n",Arr);

	
	return 0;
}