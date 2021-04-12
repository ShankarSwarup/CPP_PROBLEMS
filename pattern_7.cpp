#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i,j,a=1;
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",a);
			a++;
		}
		printf("\n");
	}
}
