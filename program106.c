#include<stdio.h>
#include<stdbool.h>


/////////////////////////////////////////////////////////////////////////////////////
//
// Function name  : StrCopyRevX
// Description    : use to perfrom string and copy reverse string
// Input          : String
// Output         : String
// Date	   			: 28/05/2022
// Author         : Suraj Sanjay Thanage
//
///////////////////////////////////////////////////////////////////////////////////////

void StrCopyRevX(char *str,char *dest)
{
	//char *dest=*str;
	char *end=str;
	char Temp;
	int i=0;
	
	while(*end!='\0')
	{
		i++;
		end++;
	}
	end--;
	
	while((*dest=*end)&&(i!=0))
	{
		Temp=*dest;
		*dest=*end;
		*end=Temp;
		dest++;
		end--;
		i--;
	}
	*dest='\0';
}
/////////////////////////////////////////////////////////////////////////
// Accept character from user and copy reverse string
/////////////////////////////////////////////////////////////////////////

int main()
{
	char Arr[202];
	char Brr[202];
	
	printf("enter the first string\n");
	gets(Arr);
	
	StrCopyRevX(Arr,Brr);
	
	printf(" copy reverse string is  :%s\n",Brr);

	
	return 0;
}