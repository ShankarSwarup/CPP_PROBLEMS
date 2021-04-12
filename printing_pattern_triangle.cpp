#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int k=n-1,l=n+1;
	if(n==1||n==0)
	{
		printf("-1");
	}
	else
	{
		for(int i=1;i<=n;i++)
	    {
		int temp=i;
		for(int j=1;j<=k;j++)
		{
           printf(" ");
		}
		for(int j=k+1;j<=n;j++)
		{
           printf("%d",temp);
		   temp=temp+1;
		}
		temp=temp-2;
		for(int j=n+1;j<l;j++)
		{
			printf("%d",temp);
			temp--;
		}
		for(int j=l;j<=n;j++)
		{
			printf(" ");
		}
		k--;
		l++;
		printf("\n");
	    }
	}
}
