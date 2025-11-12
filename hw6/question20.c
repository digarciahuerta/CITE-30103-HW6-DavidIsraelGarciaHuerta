#include <stdio.h>
int main()
{
	int newnum; 
	int counter = 0;
	do
	{
		printf("enter a number if you enter a zero it will stop");
		scanf("%d", &newnum);
		counter++;
	}
	while(newnum !=0);
	printf("numbers entered %d", counter-1);
	return 0;
}
