#include <stdio.h>
int main()
{
	int a = 10, b=4;
	float e = (float)a/b;
	float i = a/(b*1.00);
	int n = a/b;
	printf(" floating answer implicit%f\n", i);
	printf(" floating answer explicit%f\n", e);
	printf(" int answer %d\n", n);
}
