#include<stdio.h>
#include<stdbool.h>


/////////////////////////////////////////////////////////////////////////////////////
//
// Function name  : strNcpyX
// Description    : use to perfrom string and  copy string n chracter
// Input          : String
// Output         : String
// Date	   			: 28/05/2022
// Author         : Suraj Sanjay Thanage
//
///////////////////////////////////////////////////////////////////////////////////////

void strNcpyX(char *src,char *dest,int iCnt)
{
	
	while((*src!='\0')&&(iCnt!=0))
	{
		*dest=*src;
		dest++;
		src++;
		iCnt--;
	}
	dest='\0';
}
/////////////////////////////////////////////////////////////////////////
// Accept character from user and copy string n
/////////////////////////////////////////////////////////////////////////

int main()
{
	char Arr[202];
	char Brr[202];
	
	
	printf("enter the string\n");
	gets(Arr);

	strNcpyX(Arr,Brr,10);
	
	printf(" is  :%s\n",Brr);

	
	return 0;
}