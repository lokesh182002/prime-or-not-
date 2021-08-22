#include<stdio.h>
void main()
{
	int i,n,count;
	printf("\n enter value n:");
	scanf("%d",&n);
	count=0;
	i=1;
	while(i<=n)
	{
		if(n%i==0)
		count=count+1;
		else
		count=count;
		i=i+1;
	}
	if(count==2)
	printf("\n prime");
	else
	printf("\n not prime");
}
