#include <stdio.h>
#define PI 3.14159
int main()
{
	int rad;
	printf("enter a radius");
	scanf("%d", &rad);
	float cir = 2*rad * PI;
      	float area = (rad * rad) *PI;
	printf("your area is : %.2f\n", area);
	printf("your circumfrence is %.2f\n", cir);
}	
