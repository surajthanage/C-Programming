#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define FILSIZE 1024
//////////////////////////////////////////////////////////////////////
// Function Name  : CountSmall
// Description    : accept file from user and count Small character
// Date			   : 7/06/2022
// Author		   : Suraj Sanjay Thanage
//
//////////////////////////////////////////////////////////////////////

int CountSmall(char Fname[])
{
	int fd=0;  //file description
	char data[FILSIZE];
	int iRet=0,iCnt=0,i=0;
	
	fd=open(Fname,O_RDWR);
	if(fd==-1)
	{
		printf("unable to open the file\n");
		return -1;
	}
	
	
	while((iRet=read(fd,data,sizeof(data)))!=0)
	{
		for(i=0;i<iRet;i++)
		{
			if(data[i]>='a' && data[i]<='z')
			{
				iCnt++;
			}
		}
	}
	close(fd);
	return iCnt;

}
/////////////////////////////////////////////////////////////////////////
// accept file from user and count small charcter that file
////////////////////////////////////////////////////////////////////////


int main()
{
	char Fname[20];
	int iRet=0;
	printf("enter file name to open\n");
	scanf("%s",Fname);
	
	
	iRet=CountSmall(Fname);
	printf("number of  Small character is : %d\n",iRet);
	
		return 0;
}