//consecutive numbers product
#include<stdio.h>
int main()
{
	long long int n;
	scanf("%lld",&n);
	for(int i=1;i<=n/2;i++)
	{
		if(i*(i+1)==n)
		{
			printf("%lld %lld",i,i+1);
		}
	}
}
