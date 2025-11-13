#include <stdio.h>
int main()
{
	int num;
	int original;
	int rev = 0;
	printf("enter a postive integer:");
	scanf("%d", &num);
	original = num;
	while (num!= 0)
	{
		rev = rev * 10 + (num%10);
		num = num/10;
	}
	printf("original number %d",original);
	printf("flipped number %d", rev);
		
}




