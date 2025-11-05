// this would be documentation 
#include <stdio.h> //this is the link section
int main(void)// from here and below is the main function section
{
	double length, width, area, perimeter;
	printf("enter the length of the rectangle: ");
	scanf("%lf", &length);
	printf("enter the width of the rectangle: ");
	scanf("%lf", &width);
	area = length * width;
	perimeter = (length * 2) + (width*2);
	printf("area of rectangle %.2f\n", area);
	printf("perimeter of rectangle %.2f\n", perimeter);
	return 0;
}
