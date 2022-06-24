#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>


///////////////////////////////////////////////////////////////////////////
//
// Function name  : FileSize
// Description    : accept a file name from user and display size of file.
// Date	          : 13/06/2022
// Author	      : Suraj Sanjay Thanage
//
///////////////////////////////////////////////////////////////////////////

void FileSize(char Fname[])
{
	int iSize=0,fd=0;
	char buffer[10];
	
	fd=open(Fname,O_RDWR);
	if(fd==-1)
	{
		printf("Unbale to open file\n");
		return;
	}
	
	iSize=read(fd,buffer,sizeof(buffer));
	printf("%d byte Size of file \n",iSize);
	
	return 0;
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
	
	FileSize(Fname);
	
}

///////////////////////////////////////////////////////
//
// Input	:	hello.text
// output	:	File successfully open
//
///////////////////////////////////////////////////////