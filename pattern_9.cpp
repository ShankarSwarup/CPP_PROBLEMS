#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	char arr[2*n+1][2*n+1];
	int k=n+2;
	char ch,some;
	for(int i=1;i<=n+1;i++)
	{
		ch='A';
		for(int j=1;j<k;j++)
		{
          arr[i][j]=ch;
		  ch++;
		}
		for(int j=k;j<=n+1;j++)
		{
			arr[i][j]=' ';
		}
		k--;
	}
	k=2*n+2;
	ch='A';
	for(int j=k-1;j>=n+2;j--)
	{
		arr[1][j]=ch;
		ch++;
	}
	for(int j=2*n+1;j>=k;j--)
	{
		arr[1][j]=' ';
	}
	for(int i=2;i<=n+1;i++)
	{
		ch='A';
		for(int j=k-1;j>=n+2;j--)
		{
			arr[i][j]=ch;
			ch++;
		}
		for(int j=2*n+1;j>=k;j--)
		{
			arr[i][j]=' ';
		}
		k--;
	}
	int count=1;
	for(int i=n+1;i<=2*n+1;i++)
	{
		ch='A';
		for(int j=1;j<=count;j++)
		{
			arr[i][j]=ch;
			ch++;
		}
		for(int j=count+1;j<=n+1;j++)
		{
			arr[i][j]=' ';
		}
		count++;
	}
	count=n+2;
	for(int i=n+1;i<=2*n;i++)
	{
		ch='A';
		for(int j=count;j>=n+2;j--)
		{
			arr[i][j]=ch;
			ch++;
		}
		for(int j=count+1;j<=2*n+1;j++)
		{
			arr[i][j]=' ';
		}
		count++;
	}
	ch='A';
	count=2*n+1;
	for(int j=count;j>=n+2;j--)
	{
		arr[2*n+1][j]=ch;
		ch++;
	}
	for(int i=1;i<=2*n+1;i++)
	{
		for(int j=1;j<=2*n+1;j++)
		{
			printf("%c",arr[i][j]);
		}
		printf("\n");
	}
}
