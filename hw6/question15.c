#include <stdio.h>
int main()
{
	int m1;
	int m2;
	int m3;
	int m4;
	int m5;
	printf("enter your 5 marks");
	scanf("%d", &m1);
	scanf("%d", &m2);
        scanf("%d", &m3);
	scanf("%d", &m4);
	scanf("%d", &m5);
	if (m1>= 40 && m2>= 40 && m3>=40 && m4 >=40 && m5 >=40)
	{
		printf("pass");
	}
	else
	{
		printf("fail");
	}
}
