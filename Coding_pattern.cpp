#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		int k=n-2;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<=k;j++)
			{
              printf(" ");
			}
			for(int j=k+1;j<n;j++)
			{
				printf("*");
			}
			k--;
			printf("\n");
		}
	}
}
