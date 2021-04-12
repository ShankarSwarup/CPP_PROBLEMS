#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<=i;j++)
			{
				printf("*");
			}
			printf("\n");
		}
	}
}
