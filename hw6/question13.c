#include <stdio.h>
int main()
{
	int num;
	printf("enter a number");
	scanf("%d", &num);
	if (num % 2 ==0 && num %3 ==0 && num% 7 !=0 )
	{
		printf("number meets all 3 conditions");
	}
	else
	{
		printf("one or more conditions not met");
	}
}	
