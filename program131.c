#include<stdio.h>

//	*	*	*	*

void DisplayI()
{
	auto int iCnt=0;
	
	while(iCnt<4)
	{
		printf("* ");
		iCnt++;
	}
	printf("\n");
}

void DisplayR()
{
	static int iCnt=0;
	
	if(iCnt<4)
	{
		printf("* ");
		iCnt++;
		DisplayR();
	}
}

int main()
{
	DisplayI();
	DisplayR();
	
	return 0;
}