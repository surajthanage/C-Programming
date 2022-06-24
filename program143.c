#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

//////////////////////////////////////////////////////////////////////
//
// Description    : open the file and read the data on the file  
// Date			   : 6/06/2022
// Author		   : Suraj Sanjay Thanage
//
//////////////////////////////////////////////////////////////////////

int main()
{
	char Fname[20];
	char data[10];
	int fd=0;
	int iRet=0;
	
	printf("Enter file name to open \n");
	scanf("%s",Fname);
	
	fd=open(Fname,O_RDWR);
	
	if(fd==-1)
	{
		printf("Unble to open the file\n");
		return -1;
	}
	printf("File is succefully opened with fd %d\n",fd);
	
	while((iRet=read(fd,data,sizeof(data)))!=0);
	{
		write(1,data,iRet);
	}
	
	close(fd);
	
	return 0;
}