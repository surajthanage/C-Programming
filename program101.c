#include<stdio.h>
#include<stdbool.h>


/////////////////////////////////////////////////////////////////////////////////////
//
// Function name  : strcpyX
// Description    : use to perfrom string and  copy string
// Input          : String
// Output         : String
// Date	   			: 28/05/2022
// Author         : Suraj Sanjay Thanage
//
///////////////////////////////////////////////////////////////////////////////////////

void strcpyX(char *src,char *dest)
{
	
	while(*src!='\0')
	{
		*dest=*src;
		dest++;
		src++;
	}
	dest='\0';
}
/////////////////////////////////////////////////////////////////////////
// Accept character from user and copy string
/////////////////////////////////////////////////////////////////////////

int main()
{
	char Arr[202];
	char Brr[202];
	
	printf("enter the string\n");
	gets(Arr);

	strcpyX(Arr,Brr);
	
	printf(" After reverse string is  :%s\n",Brr);

	
	return 0;
}