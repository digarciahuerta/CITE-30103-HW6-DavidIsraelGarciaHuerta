#include <stdio.h>
int main()
{
    	int a;
    	int b;
    	int ans;
    	printf("enter two numbers you would like to work with");
    	scanf("%d", &a);
    	scanf("%d", &b);
    	char op;
    	printf("choose an operator you would like to work with + - / *");
    	scanf(" %c", &op);
    	switch(op)
    	{
    		case '*':
    		ans= a*b;
    		printf("%d\n", ans);
    		break;
    		case '+':
    		ans= a+b;
    		printf("%d\n", ans);
    		break;
    		case '-':
    		ans= a-b;
    		printf("%d\n", ans);
    		break;
    		case '/':
    		if (b==0)                    
    		{
    			printf("cannot divide by 0");
    		}
    		else
    		{
    			ans=a/b;
    			printf("%d\n", ans);            
    		} 
		break;
	}		
}
