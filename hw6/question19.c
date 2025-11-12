#include <stdio.h>
int main()
{	int num;
	int result=0;
	printf("enter a number");
	scanf("%d", &num);
	int i = 1;
	while (i<= num)
	{	
		result = result +i; 
		i++;
	}
	printf("the final result from the sum starting from 1 is:%d", result);
}


