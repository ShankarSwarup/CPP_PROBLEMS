#include<stdio.h>
int main()
{
	int n,arr[100][100],a=1;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		if(i%2==0)
		{
			for(int j=0;j<n;j++)
			{
               arr[i][j]=a;
			   a++;
			}
		}
		else if(i%2!=0)
		{
			for(int j=n-1;j>=0;j--)
			{
               arr[i][j]=a;
			   a++;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}
