//to find code for simple interest
#include<stdio.h>
main()
{
	int p,t,r;
	float si;
	printf("enter p,t,r values");
	scanf("%d%d%d",&p,&t,&r);
	si=(p*t*r)/100;
	printf("the si value is %f",si);
	return 0;
}
