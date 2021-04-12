#include<stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	int a=(2*n)-1;
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	int k=n-1;
	for(i=n;i<a;i++)
	{
		for(j=0;j<k;j++)
		{
			printf("* ");
		}
		for(j=k;j<n;j++)
		{
			printf(" ");
		}
		k--;
		printf("\n");
	}
}
