//to write code by using nested if else conditonal statement
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter a,b,c values");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("a is greatest number\n");
		}
		else
		{
			printf("c is greatest number\n");
		}
	}
	else
	{
		if(b>c)
		{
			printf("b is greatest numder\n");
		}
		else
		{
			printf("c is greatest number\n");
		}
	}
	return 0;
}
