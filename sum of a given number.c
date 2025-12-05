#include<stdio.h>
int main()
{
	int n,sum,temp;
	printf("enter n value");
	scanf("%d",&n);
	sum=0;
	while(n!=0)
	{
		temp=n%10;
		sum=sum+temp;
		n=n/10;
	}
	printf("sum is %d",sum);
	return 0;
}
