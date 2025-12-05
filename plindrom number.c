#include<stdio.h>
int main()
{
	int n,temp,sum,rev;
	printf("enter n value");
	scanf("%d",&n);
	sum=0;
	temp=n;
	while(n!=0)
	{
		rev=n%10;
		sum=sum*10+rev;
		n=n/10;
	}
	if(sum==temp)
	{
		printf("plindrome number");
	}
	else
	{
		printf("not a plindrome number");
	}
	return 0;
}
