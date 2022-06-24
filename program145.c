#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>


//////////////////////////////////////////////////////////////////////
// Function Name  : filelength
// Description    : accept file from user and count character
// Date			   : 7/06/2022
// Author		   : Suraj Sanjay Thanage
//
//////////////////////////////////////////////////////////////////////

int FileLength(char Fname[])
{
	int fd=0;  //file description
	char data[10];
	int iRet=0,iSum=0;
	
	fd=open(Fname,O_RDWR);
	if(fd==-1)
	{
		printf("unable to open the file\n");
		return -1;
	}
	printf("File is succefully open with FD %d\n",fd);
	
	
	while((iRet=read(fd,data,sizeof(data)))!=0)
	{
		iSum=iSum+iRet;
	}	
	
	close(fd);
	return iSum;

}
/////////////////////////////////////////////////////////////////////////
// accept file from user and count charcter that file
////////////////////////////////////////////////////////////////////////

int main()
{
	char Fname[20];
	int iRet=0;
	
	printf("enter file name to open\n");
	scanf("%s",Fname);
	
	iRet=FileLength(Fname);
	printf("length of file is %d\n",iRet);
		return 0;
}