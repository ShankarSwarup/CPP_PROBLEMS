#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,arr[1000];
		scanf("%d",&n);
		for(int i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n-i-1;j++)
			{
				if(arr[j]>arr[j+1])
				{
					int temp=arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=temp;
				}
			}
		}
		for(int i=n-1;i>=0;i--)
		{
          printf("%d",arr[i]);
		}
		printf("\n");
	}
}
