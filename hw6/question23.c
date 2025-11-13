#include <stdio.h>
int main()
{
	int num;
        int positives = 0;
	int negatives = 0; 
	int evens = 0;
	int odds = 0;	
	int loopstopper =1;
	do
	{	
		printf("enter any integer zero makes it stop");
		scanf("%d", &num);
		if(num==0)
		{
			loopstopper=0;
		}
		else
		{
			if (num >0) 
			{
				positives ++;
			}
			else
			{
				negatives++;
			}
			if (num%2==0)
			{
				evens ++;
			}
			else
			{
				odds++;
			}
		}
	}while(loopstopper);
	printf("postives: %d\n", positives);
	printf("Negatives: %d\n", negatives);
        printf("Evens: %d\n", evens);
        printf("Odds: %d\n", odds);
	return 0;
}
	
