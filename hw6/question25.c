#include <stdio.h>
int main()
{
	int l;
	int r;
	printf("enter range of (L and R):");
	scanf("%d %d", &l, &r);
	for (int i = l; i<= r; i++)
	{
		printf("table of %d\n", i);
		for (int j = 1; j <= 10; j++) 
		{
			printf("%d * %d = %d\n", i, j, i * j);
		}
	printf("\n");
	}	
	return 0;
}
