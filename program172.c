#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>


/////////////////////////////////////////////////////////////////////////////////
//
// Function name  : OpenFile
// Description    : accept a file name from user and open that file in read mode
// Date	          : 13/06/2022
// Author	      : Suraj Sanjay Thanage
//
////////////////////////////////////////////////////////////////////////////////

void OpenFile(char Fname[])
{
	int Fd=0;
	
	Fd=open(Fname,O_RDONLY);
	if(Fd==-1)
	{
		printf("Unable to open file\n");
		return;
	}
	
	printf("File successfully open with Fd is : %d\n",Fd);
}
//////////////////////////////////////////////////////////////////////////////
// Write a application which accept a file name from user 
// and open that file in read mode
/////////////////////////////////////////////////////////////////////////////

int main()
{
	char Fname[20];
	
	printf("Enter file name \n");
	scanf("%s",Fname);
	
	OpenFile(Fname);
	
}

///////////////////////////////////////////////////////
//
// Input	:	hello.text
// output	:	File successfully open
//
///////////////////////////////////////////////////////