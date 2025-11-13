#include <stdio.h>
int main()
{
	int rows;
	printf("enter number of rows");
	scanf("%d", &rows);
	for (int i=1; i<=rows;i++)
	{	
		printf(" ");
		for (int j=1; j<=rows-i; j++)
		{
			printf(" ");
		}
		int stars= 2 * i -1;
		for (int k= 1; k<= stars;k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
