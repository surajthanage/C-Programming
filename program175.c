#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>


///////////////////////////////////////////////////////////////////////////
//
// Function name  : FileSize
// Description    : write a string at end of the file  
// Date	          : 13/06/2022
// Author	      : Suraj Sanjay Thanage
//
///////////////////////////////////////////////////////////////////////////

void WriteString(char Fname[])
{
	int fd=0,iRet=0;
	char data[10];
	
	fd=open(Fname,O_RDWR| O_APPEND);
	
	if(fd==-1)
	{
		printf("Unble to open the file\n");
		return ;
	}
	printf("File is succefully opened with fd %d\n",fd);
	 
	printf("Enter a data you want to you write\n ");
	scanf(" %[^'\n']s",data);
	 
	iRet=write(fd,data,strlen(data));
	printf("%d byte succefully written in the file\n",iRet);
	
}
///////////////////////////////////////////////////////////////////////////
// Write a application which accept a file name and string from user 
// and write a string at theend of the file data.
///////////////////////////////////////////////////////////////////////////

int main()
{
	char Fname[20];
	
	printf("Enter file name \n");
	scanf("%s",Fname);
	
	
	WriteString(Fname);
	
	return 0;
}

///////////////////////////////////////////////////////
//
// Input	:	hello.text
// output	:	File successfully open
//
///////////////////////////////////////////////////////