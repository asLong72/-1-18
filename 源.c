#include <stdio.h>

int main()
{
	int inmouth = 0;
	char* mouth[] = { "January","February","March","April","May","June","July","August","September","October","November","December" };
	scanf("%d", &inmouth);
	printf(mouth[inmouth-1]);
	return 0;
}