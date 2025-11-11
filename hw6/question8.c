#include <stdio.h>
int global = 10;
int main()
{
	int mainmethod = 20;
	printf("this is the main method variable or local one: %d\n", mainmethod);
	printf("this is the global variable %d\n", global);
	return 0;
}
