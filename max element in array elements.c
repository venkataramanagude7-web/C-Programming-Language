#include<stdio.h>
int main()
{
	int n,i,max;
	printf("enter n value");
	scanf("%d",&n);
	int a[n];
	printf("enter %d elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	printf("%d",max);
}
