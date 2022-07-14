////program for little endian or big endian////
#include<stdio.h>
int main()
{
	int var=1;
	char *p=&var;
	if(*p==1)
		printf("little endian cpu\n");
	else printf("big endian cpu\n");
}

