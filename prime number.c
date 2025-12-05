#include<stdio.h>
int main()
{
	int n,fact=0,i;
	printf("enter n value");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		if(n%i==0)
		{
			fact=fact+1;
		}
	}
	if(fact==1)
	{
		printf("yes it is a prime");
	}
	else
	{
		printf("no it is not a prime");
	}
	return 0;
}
