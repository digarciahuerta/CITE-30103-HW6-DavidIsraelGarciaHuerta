#include <stdio.h>
int main()
{
	int num1, num2;
	printf("enter first number:");
	scanf("%d", &num1);
	printf("second number:"); 
	scanf("%d", &num2);
	int add = num1+num2;
	int sub = num1-num2;
	int mult = num1*num2;
	int div= num1/num2;
	int rem = num1%num2;	
	printf("added: %d\n", add);
	printf("subtracted: %d\n", sub);
	printf("mulplicated: %d\n", mult);
	printf("divided: %d\n",div);
	printf("remainder: %d\n", rem);
}	
