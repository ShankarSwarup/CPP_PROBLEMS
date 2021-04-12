//Allibaba
#include<stdio.h>
int main()
{
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
		long long int n;
		scanf("%lld",&n);
		long long int ans=n%40;
		printf("%d\n",ans);
	}
}
