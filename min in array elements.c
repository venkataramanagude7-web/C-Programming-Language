#include<stdio.h>
int main()
{
	int n,i,min;
	printf("enter n value");
	scanf("%d",&n);
	int a[n];
	printf("enter %d values",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	min=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	printf("%d",min);
	return 0;
}
