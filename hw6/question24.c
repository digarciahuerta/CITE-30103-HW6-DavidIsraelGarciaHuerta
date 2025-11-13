#include <stdio.h>
int main()
{
	int counter = 0;
	for (int i = 0; i <=50; i++)
	{
		if(i==40)
		{
			break;
		}
	
		if (i% 5 ==0)
		{
			continue;
		}
		printf("%d", i);
		counter++;
	}
	printf("\nTotal number displuyed:: %d\n",counter);
	return 0;
}
