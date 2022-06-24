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
	char data[100];
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
	
	iRet=read(fd,data,10);
	printf("%d byte succefully read in the file\n",iRet);
	
	printf("Data from file is %s\n",data);
	
	return 0;
}