#include <stdio.h>
int main()
{
	int num;
	printf("enter an integer");
	scanf("%d", &num);
	printf(num>0 ? "positive" : (num <0 ?"negative" : "zero"));
}
