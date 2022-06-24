#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

//////////////////////////////////////////////////////////////////////
//
// Description    : To Create new file and write the data that file
// Date			   : 5/06/2022
// Author		   : Suraj Sanjay Thanage
//
//////////////////////////////////////////////////////////////////////

int main()
{
	char Fname[20];
	char data[100];
	int fd=0;
	
	printf("Enter file name to create \n");
	scanf("%s",Fname);
	
	fd=creat(Fname,0777);
	
	if(fd==-1)
	{
		printf("Unble to create the file\n");
		return -1;
	}
	printf("File is succefully created with fd %d\n",fd);
	
	printf("Enter the data that you want to write\n");
	scanf(" %[^'\n']s",data);
	
	write(fd,data,strlen(data));
	
	return 0;
}