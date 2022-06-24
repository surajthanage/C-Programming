#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>


///////////////////////////////////////////////////////////////////////////
//
// Description    : accept file from user and compair both file
// Date			   : 8/06/2022
// Author		   : Suraj Sanjay Thanage
//
////////////////////////////////////////////////////////////////////////////

int main()
{
	char Fname[20];
	char data[10];
	int fd=0;
	
	printf("Enter file name which contain the data \n");
	scanf("%s",Fname);
	
	fd=open(Fname,O_RDONLY);
	if(fd==-1)
	{
		printf("Unable to open file\n");
		return -1;
	}
	
	lseek(fd,10,0);
	read(fd,data,5);
	write(1,data,5);
	
	return 0;
}