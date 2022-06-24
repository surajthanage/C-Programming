#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

//////////////////////////////////////////////////////////////////////
//
// Description    : Create new file
// Date			   : 5/06/2022
// Author		   : Suraj Sanjay Thanage
//
//////////////////////////////////////////////////////////////////////

int main()
{
	char Fname[20];
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
	
	return 0;
}