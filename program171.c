#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

///////////////////////////////////////////////////////////////////////////
//
// Description    : accept a file name from user and create that file.
// Date	          : 13/06/2022
// Author	      : Suraj Sanjay Thanage
//
///////////////////////////////////////////////////////////////////////////

int main()
{
	char Fname[10];
	int fd=0;
	
	printf("Enter file name\n");
	scanf("%s",Fname);
	
	fd=creat(Fname,0777);
	if(fd==0)
	{
		printf("File can not be create  \n");
		return -1;
	}
	
	printf("File succesfully created with fd is :%d\n",fd);
	
	close(fd);
	
	return 0;	
}

///////////////////////////////////////////////////////
//
// Input	:	hello.text
// output	:	File successfully create
//
///////////////////////////////////////////////////////