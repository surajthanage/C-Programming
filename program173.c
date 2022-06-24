#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

#define FILESIZE 1024

///////////////////////////////////////////////////////////////////////////
// Function name  : OpenFile
// Description    : accept a file name from user 
// 					and read data and display on scrren
// Date	          : 13/06/2022
// Author	      : Suraj Sanjay Thanage
//
///////////////////////////////////////////////////////////////////////////

void Display(char Fname[])
{
	int Fd=0;
	char Buffer[FILESIZE];
	
	Fd=open(Fname,O_RDONLY);
	if(Fd==-1)
	{
		printf("Unable to open file\n");
		return;
	}
	
	read(Fd,Buffer,FILESIZE);
	printf("Data is : %s\n",Buffer);
}
///////////////////////////////////////////////////////////////////////////
// Write a application which accept a file name from user 
// and read all data and display all date on scren
///////////////////////////////////////////////////////////////////////////

int main()
{
	char Fname[20];
	
	printf("Enter file name \n");
	scanf("%s",Fname);
	
	Display(Fname);
	
}

///////////////////////////////////////////////////////
//
// Input	:	hello.text
// output	:	File successfully open
//
///////////////////////////////////////////////////////