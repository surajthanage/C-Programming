#include<stdio.h>

///////////////////////////////////////////////////////////////////////////
//
// Description    : accept number from user and sum digit
// Date			   : 10/06/2022
// Author		   : Suraj Sanjay Thanage
//
////////////////////////////////////////////////////////////////////////////
void Display(char *str)
{
	 while(*str!='\0')
	 {
		printf("%c\n",*str);
		str++;
	 }

}
int main()
{
	
	char Arr[10];
	
	printf("Enter string \n");
	scanf("%[^'\n']s",Arr);
	
	Display(Arr);
	
	
	return 0;
}