#include <stdio.h>
int main()
{	int num;
	printf("enter an integer");
	scanf("%d", &num);
	if (num>0)
	{
		printf("postive");
	}
        else if (num<0)
	{
		printf("negative");
	}
	else
	{
		printf("0");
	}
}
